#include "glass.h"
#include <QPainter>
#include <QRgb>
#include <QImage>
#include <QRect>
#include <QPixMap>
#include <QDebug>
#include <QMessageBox>
#include "xdialog.h"
#include "dialog.h"
#include <QApplication>

GLASS::GLASS(QWidget *parent) : QWidget(parent)
{
    gameOn=false;
    QObject::connect(this,SIGNAL(signalGlassInit()),this,SLOT(slotGlassInit()), Qt::QueuedConnection);
    emit signalGlassInit();
    cur = new Figure; //текущая (падающая) фигурка
    next = new Figure; //образец следующей фигурки
    idTimer=0;
    myscore=0;
}

GLASS::~GLASS()
{
    delete cur;
    delete next;
}

void GLASS::CheckGlass()
{
//    QColor* mass[5];
for (int r = m_rows-1; r>0; r--)
{
    for (int c = 0; c<(m_columns-2); c++)
    {

            if ((glassArray[r][c]==glassArray[r][c+1])&&(glassArray[r][c]==glassArray[r][c+2])&&(glassArray[r][c]!=emptyCell))
            {
                QColor z=glassArray[r][c];
                for(int r1=r; r1>0; r1--)
                {
                    glassArray[r1][c]=glassArray[r1-1][c];
                    glassArray[r1][c+1]=glassArray[r1-1][c+1];
                    glassArray[r1][c+2]=glassArray[r1-1][c+2];
                }
                glassArray[0][c]=emptyCell;
                glassArray[0][c+1]=emptyCell;
                glassArray[0][c+2]=emptyCell;
                myscore+=3;
                if ((c<(m_columns-3)&&(z==glassArray[r][c+3])))
                {
                    for(int r1=r; r1>0; r1--)
                    {
                        glassArray[r1][c+3]=glassArray[r1-1][c+3];
                    }
                    glassArray[0][c+3]=emptyCell;
                    myscore+=1;
                    if ((c<(m_columns-4)&&(z==glassArray[r][c+4])))
                    {
                        for(int r1=r; r1>0; r1--)
                        {
                            glassArray[r1][c+4]=glassArray[r1-1][c+4];
                        }
                        glassArray[0][c+4]=emptyCell;
                        myscore+=1;
                    };
                };
                emit setScore(myscore);
                CheckGlass();
                r=m_rows-1;
                c=0;
            };

    };
};


for (int r = m_rows-1; r>1; r--)
{
    for (int c = 0; c<m_columns; c++)
    {
        if ((glassArray[r][c]==glassArray[r-1][c])&&(glassArray[r][c]==glassArray[r-2][c])&&(glassArray[r][c]!=emptyCell))
        {
            QColor z=glassArray[r][c];
            for(int r1=r; r1>2; r1--)
            {
                glassArray[r1][c]=glassArray[r1-3][c];
            }
            glassArray[0][c]=emptyCell;
            glassArray[1][c]=emptyCell;
            glassArray[2][c]=emptyCell;
            myscore+=3;
            if (z==glassArray[r][c])
            {
                for(int r1=r; r1>2; r1--)
                {
                    glassArray[r1][c]=glassArray[r1-1][c];
                }
                glassArray[0][c]=emptyCell;
                myscore+=1;
                if (z==glassArray[r][c])
                {
                    for(int r1=r; r1>2; r1--)
                    {
                        glassArray[r1][c]=glassArray[r1-1][c];
                    }
                    glassArray[0][c]=emptyCell;
                    myscore+=1;
                };
            };
            emit setScore(myscore);
            CheckGlass();
        };
    }
}
}

void GLASS::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    for (int i = 0; i<m_columns; i++)
    {
        for (int j = 0; j<m_rows; j++)
        {
            painter.fillRect(QRect(i*W,j*W,W-1,W-1),glassArray[j][i]);
        }
    }
    if(gameOn)
    {
        cur->paintFigure(painter);
    }
}

void GLASS::keyPressEvent(QKeyEvent *event)
{
    if(gameOn)
    {
    switch(event->key())
    {
    case Qt::Key_Right://если есть «куда», перемещаем фигурку влево
    {
        QPoint ind =cur->GetIndex();
        QColor cv = grab(QRect(ind.x()+W+5,ind.y()+3*W-5, 1, 1)).toImage().pixelColor(0,0);
        if((ind.x()<=m_columns*(W-1))&&(cv==QColor(150,150,150)))
        {
            cur->SetIndex(QPoint(ind.x()+W, ind.y()));
        }
    }
    break;
    case Qt::Key_Left://если есть «куда», перемещаем фигурку влево
    {
        QPoint ind =cur->GetIndex();
        QColor cv = grab(QRect(ind.x()-5,ind.y()+3*W-5, 1, 1)).toImage().pixelColor(0,0);
        if((ind.x()>=W)&&(cv==QColor(150,150,150)))
        {
            cur->SetIndex(QPoint(ind.x()-W, ind.y()));
        }
    }
    break;
    case Qt::Key_Down://циклически ”переливаем” цвета в фигурке сверху вниз
    {
        cur->rotateColors(event);
    }
    break;
    case Qt::Key_Up://циклически ”переливаем” цвета в фигурке снизу вверх
    {
        cur->rotateColors(event);
    }
    break;
    case Qt::Key_Space://«роняем» фигурку
    {
        QPoint ind =cur->GetIndexLow();
        int x=ind.x()/W;
        int y=ind.y()/W;
        while ((y<=m_rows-1)&&(glassArray[y][x]==emptyCell))
        {
            y++;
        }
        glassArray[y-3][x] = (cur->GetColors())[0];
        glassArray[y-2][x] = (cur->GetColors())[1];
        glassArray[y-1][x] = (cur->GetColors())[2];
        CheckGlass();
        if (glassArray[2][m_columns/2]==emptyCell)
        {cur->SetColors(next->GetColors());
        cur->SetIndex(QPoint(m_columns/2*W,0));
        next->SetIndex(QPoint(0,0));
        next->MakeRandomColors();
        emit drawPattern(next);}
        else
        {
            //int ret = QMessageBox::warning(this, tr("Game over"), tr("We love you very much!!!"), QMessageBox::Ok );
            //emit endGame((myscore>100)?true:false);
            killTimer(idTimer);
            Dialog* pdlg = new Dialog(0,myscore);
            if (pdlg->exec() == QDialog::Accepted)
            {
                pdlg->close();
                emit slotNewGame();

            }
            else
            {
               pdlg->close();
               QApplication::quit();
            }
        }
        break;
    }
    }
    }
    else
    {
    QWidget::keyPressEvent(event);//предоставляемвозможностьбазовому
    //классуобработатьсобытие
    }
    repaint();
}

void GLASS::timerEvent(QTimerEvent *event)
{
    QPoint ind =cur->GetIndexLow();
    int x=ind.x()/W;
    int y=ind.y()/W;
    if ((y<=m_rows-1)&&(glassArray[y][x]==emptyCell))
    {
        cur->SetIndex(QPoint(cur->GetIndex().x(),cur->GetIndex().y()+W));
    }
    else
    {
        glassArray[y-3][x] = (cur->GetColors())[0];
        glassArray[y-2][x] = (cur->GetColors())[1];
        glassArray[y-1][x] = (cur->GetColors())[2];
        CheckGlass();
        if (glassArray[2][m_columns/2]==emptyCell)
        {cur->SetColors(next->GetColors());
        cur->SetIndex(QPoint(m_columns/2*W,0));
        next->SetIndex(QPoint(0,0));
        next->MakeRandomColors();
        emit drawPattern(next);}
        else
        {
            killTimer(idTimer);
            Dialog* pdlg = new Dialog( 0,myscore);
            if (pdlg->exec() == QDialog::Accepted)
            {
                pdlg->close();
                emit slotNewGame();

            }
            else
            {
               pdlg->close();
               QApplication::quit();
            }

        }
    }

    repaint();
}

void GLASS::slotGlassInit()
{
    glassArray.QVector::resize(m_rows);
    for(int i=0;i<m_rows;i++)
    {
        (glassArray[i]).QVector::resize(m_columns);
    }
    QSize s(m_columns*W, m_rows*W);
    setFixedSize(s);
    for (int i = 0; i<m_columns; i++)
    {
        for (int j = 0; j<m_rows; j++)
        {
            glassArray[j][i]=emptyCell;
        }
    }
}

void GLASS::slotNewGame()
{
    gameOn=true;//установку признака «Играем»;
    clearGlass();//очистка текущего содержимого стакана;
    cur->SetIndex(QPoint(m_columns/2*W,0));//формирование текущей фигурки (цвета, начальные индексы);
    cur->MakeRandomColors();
    next->SetIndex(QPoint(0,0));
    next->MakeRandomColors();
    idTimer=startTimer(500);
    emit drawPattern(next);
    myscore=0;
    emit setScore(myscore);
    setFocus();// !!!Иначе события от клавиатуры будут поступать главному окну!
    repaint();
}

void GLASS::clearGlass()
{
    for (int i = 0; i<m_columns; i++)
    {
        for (int j = 0; j<m_rows; j++)
        {
            glassArray[j][i]=emptyCell;
        }
    }
}





