#include "dialog.h"
#include "ui_dialog.h"
#include <QPixmap>
#include <QMatrix>
#include <QDebug>
#include <QDir>
#include <QUrl>
#include <QMediaPlayer>
Dialog::Dialog(QWidget *parent, int sc) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);
    scores=sc;
    contendg={
        QPixmap(":/im/imag/f (8).jpg"),
        QPixmap(":/im/imag/f (11).jpg"),
        QPixmap(":/im/imag/f (12).jpg"),
        QPixmap(":/im/imag/f (15).jpg"),
        QPixmap(":/im/imag/f (20).jpg"),
        QPixmap(":/im/imag/f (21).jpg"),
        QPixmap(":/im/imag/f (22).jpg"),
    };
    contendb={
        QPixmap(":/im/imag/f (10).jpg"),
        QPixmap(":/im/imag/f (13).jpg"),
        QPixmap(":/im/imag/f (14).jpg"),
        QPixmap(":/im/imag/f (23).jpg")
    };
   if(scores>300)
   {pix = QPixmap(contendg[rand()%contendg.size()]);}
   else
   {pix = QPixmap(contendb[rand()%contendb.size()]);}
    if (pix.width() >1200)
    {
        resize(pix.width()/4,pix.height()/4);
    }
    else
    {
        resize(pix.width()/2.5,pix.height()/2.5);;
    }

    pix = QPixmap(pix.scaled(width(),height(),Qt::KeepAspectRatioByExpanding,Qt::FastTransformation));
    brush = QBrush(pix);
    pal.setBrush(this->backgroundRole(),brush);
    setPalette(pal);
    scores=0;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *event)
{


}
