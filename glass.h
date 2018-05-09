#ifndef GLASS_H
#define GLASS_H

#include <QWidget>
#include <QVariant>
#include <QVector>
#include <QColor>
#include <QSize>
#include <QDebug>
#include "figure.h"
#include <QDir>
#include <QUrl>
#include <QMediaPlayer>
#define emptyCell QColor(150,150,150)//серый цвет

class GLASS : public QWidget
{
    Q_OBJECT
    uint timerInterval;
    int m_rows;
    int m_columns;
    Q_PROPERTY(uint rows READ rows WRITE setRows);
    Q_PROPERTY(uint columns READ columns WRITE setColumns);
    bool gameOn; //Признак – «Играем»
    uint score; // Текущий счет
    QVector<QVector<QColor>>glassArray;
    Figure *cur; //текущая (падающая) фигурка
    Figure *next; //образец следующей фигурки
    int idTimer;


public:
    explicit GLASS(QWidget *parent = nullptr);
    static const uint W=20;
int myscore;
    uint rows() const
    {
        return m_rows;
    }

    uint columns() const
    {
        return m_columns;
    }
    ~GLASS();
    void CheckGlass();

signals:
    void signalGlassInit();
    void drawPattern(Figure*next);
    void setScore(int);
    void endGame(bool);

public slots:
    void setRows(uint rows)
    {
        m_rows = rows;
    }
    void setColumns(uint columns)
    {
        m_columns = columns;
    }
    void slotGlassInit();
    void clearGlass();
    void slotNewGame();

protected:
    virtual void paintEvent(QPaintEvent *event);
    virtual void keyPressEvent(QKeyEvent *event);
    virtual void timerEvent(QTimerEvent *event);
};

#endif // GLASS_H
