
#ifndef ENEMY_H
#define ENEMY_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QObject>


class obj: public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
    int row;
    int column;
    int data[20][20];
    //bool move;


public:
    obj(int [20][20]);
};

#endif // OBJ_H
