#ifndef SHHIP_H
#define SHHIP_H



#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QObject>


class shhip : public QObject, public QGraphicsPixmapItem {

    Q_OBJECT
    int row;
    int column;
    int data[20][20];
    //bool move;


public:
    shhip(int [20][20]);

};

#endif // SHHIP_H
