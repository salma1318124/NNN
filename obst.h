
#ifndef OBST_H
#define OBST_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QObject>

class obst : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
    int row;
    int column;
    int data[20][20];
    //bool move;



public:
    obst(int [20][20]);
};

#endif // OBST_H
