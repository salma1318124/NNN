#ifndef SHIP_H
#define SHIP_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QObject>


class ship : public QObject, public QGraphicsPixmapItem {

    Q_OBJECT
    int row;
    int column;
    int data[20][20];
    //bool move;


public:
    ship(int [20][20]);

//public slots:
//    void move();
};

#endif // SHIP_H
