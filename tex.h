#ifndef TEX_H
#define TEX_H

#include <QWidget>

class tex : public QWidget
{
    Q_OBJECT
    QVector<QString> t = {
        "Ti super",
        "Kak mogno tak horosho igrat?",
        "Idi pocelyi papu",
        "Ny scolko mogno igrat?",
        "Poddergivaem tebya",
        "Molodec",
        "Klassno igraesh",
        "Ti samaya zamechatelnaya",
        "Ulibnis"
    };
public:
    explicit tex(QWidget *parent = nullptr);

signals:
    void change(QString);
public slots:
    void Chtext();
};

#endif // TEX_H
