#ifndef NEXTFIGURE_H
#define NEXTFIGURE_H

#include <QWidget>
#include <QDebug>
#include "figure.h"

class NextFigure : public QWidget
{
    Q_OBJECT
    Figure*m_next=nullptr;
public:
    explicit NextFigure(QWidget *parent = nullptr);

signals:

public slots:
    void setNewNext(Figure*);//Слот, который будет обрабатывать появление новой следующей фигуры
    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event);
};

#endif // NEXTFIGURE_H
