#include "nextfigure.h"
#include <QPainter>

NextFigure::NextFigure(QWidget *parent) : QWidget(parent)
{

}

void NextFigure::paintEvent(QPaintEvent *event)
{
   if (m_next!=nullptr)
    {
        QPainter painter1(this);
        painter1.fillRect(QRect(0,0,19,19),m_next->GetColors()[0]);
        painter1.fillRect(QRect(0,20,19,19),m_next->GetColors()[1]);
        painter1.fillRect(QRect(0,40,19,19),m_next->GetColors()[2]);
    }

}

void NextFigure::setNewNext(Figure*next)//Слот, который будет обрабатывать появление новой следующей фигуры
{
    m_next = next;
    repaint();
}

