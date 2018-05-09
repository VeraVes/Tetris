#include "photo.h"
#include <QPixmap>
#include <QPainter>
#include <QVector>
#include <QDebug>

Photo::Photo(QWidget *parent) : QWidget(parent)
{
    cont={
        QPixmap(":/im/imag/f (2).jpg"),
        QPixmap(":/im/imag/f (3).jpg"),
        QPixmap(":/im/imag/f (4).jpg"),
        QPixmap(":/im/imag/f (5).jpg"),
        QPixmap(":/im/imag/f (6).jpg"),
        QPixmap(":/im/imag/f (7).jpg"),
        QPixmap(":/im/imag/f (9).jpg"),
        QPixmap(":/im/imag/f (16).jpg"),
        QPixmap(":/im/imag/f (17).jpg"),
        QPixmap(":/im/imag/f (18).jpg"),
        QPixmap(":/im/imag/f (19).jpg"),
        QPixmap(":/im/imag/f (24).jpg"),
        QPixmap(":/im/imag/f (25).jpg"),
        QPixmap(":/im/imag/f (26).jpg")
    };
    t = {
        "Ti super",
        "Kak mogno tak horosho igrat?",
        "Idi pocelyi papu",
        "Ny scolko mogno igrat?",
        "Poddergivaem tebya",
        "Molodec",
        "Klassno igraesh",
        "Ti samaya zamechatelnaya",
        "Nado podnazgat",
        "Chmoki chmoki",
        "Mama zayka",
        "Ti klassnaya",
        "Byd ymnicey",
        "Ulibnis"
    };
}

static int q=1;

void Photo::scoreChanged(int a)
{
    if(a/20>=q)
    {
        q++;
        emit changeText(t[rand()%t.size()]);
        repaint();
    }
}

void Photo::paintEvent(QPaintEvent *event)
{
    QPainter paint(this);
    QPixmap pix;
    if (q==1){pix = QPixmap(":/im/imag/f (1).jpg").scaled(this->width(), this->height(), Qt::KeepAspectRatio);}
    else {pix = cont[rand()%cont.size()].scaled(this->width(), this->height(), Qt::KeepAspectRatio);};
    paint.drawPixmap(0,0,pix);
}
