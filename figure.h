#ifndef FIGURE_H
#define FIGURE_H
#include <QColor>
#include <QPoint>
#include <QKeyEvent>


class Figure
{
    int m_i;
    int m_j;
    int m_W;
    QColor arr[3];
public:
    Figure();
    void SetIndex(QPoint); //Методы изменения индексов верхней клетки фигуры
    QPoint GetIndex(); //Методы получения индексов верхней/нижней клеток
    QPoint GetIndexLow();
    void rotateColors(QKeyEvent *event); //Циклическое перемещение цветов –вниз/вверх
    void MakeRandomColors();//Формирование случайным образом цветов
    void paintFigure(QPainter&painter);//Отрисовка фигуры
    ~Figure();
    QColor* GetColors();
    void SetColors(QColor*);

};

#endif // FIGURE_H
