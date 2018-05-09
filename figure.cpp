#include "figure.h"
#include<QPainter>
#include<QVector>
#include<QColor>
#include<QDebug>


Figure::Figure()
{
    m_i = 0;
    m_j = 0;
    m_W = 20;
    arr[Qt::red,Qt::green,Qt::blue];
}
void Figure::SetIndex(QPoint a)//Методы изменения индексов верхней клетки фигуры
{
    m_i=a.x();
    m_j=a.y();
}
QPoint Figure::GetIndex()//Методы получения индексов верхней/нижней клеток
{
    return QPoint(m_i,m_j);
}

QPoint Figure::GetIndexLow()
{
    return QPoint(m_i,m_j+3*m_W);
}

void Figure::rotateColors(QKeyEvent *event) //Циклическое перемещение цветов –вниз/вверх
{
    if (event->key() == Qt::Key_Down)
    {
        QColor col=arr[2];
        arr[2]=arr[1];
        arr[1]=arr[0];
        arr[0]=col;
    };
    if (event->key() == Qt::Key_Up)
    {
        QColor col=arr[0];
        arr[0]=arr[1];
        arr[1]=arr[2];
        arr[2]=col;
    };
}

void Figure::MakeRandomColors()//Формирование случайным образом цветов
{

    QVector<QColor> vec ={QColor(Qt::red),QColor(Qt::green),QColor(Qt::blue), QColor(Qt::yellow),QColor(Qt::white)};
    arr[0]=vec[rand()%5];
    arr[1]=vec[rand()%5];
    arr[2]=vec[rand()%5];
//    arr[0]=vec[rand()%2];
//    arr[1]=vec[rand()%2];
//    arr[2]=vec[rand()%2];
}
void Figure::paintFigure(QPainter&painter)//Отрисовка фигуры
{
    painter.fillRect(QRect(m_i,m_j,m_W-1,m_W-1),arr[0]);
    painter.fillRect(QRect(m_i,m_j+m_W,m_W-1,m_W-1),arr[1]);
    painter.fillRect(QRect(m_i,m_j+2*m_W,m_W-1,m_W-1),arr[2]);
}

Figure::~Figure()
{
}

QColor* Figure::GetColors()
{
    return arr;
}

void Figure::SetColors(QColor *a)
{
    arr[0]=a[0];
    arr[1]=a[1];
    arr[2]=a[2];
}


