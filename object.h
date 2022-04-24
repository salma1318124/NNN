#ifndef OBJECT_H
#define OBJECT_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QObject>
#include "health.h"


class Object : public QObject  , public QGraphicsPixmapItem {
        //public QObject
   Q_OBJECT
   int row;
   int column;
   int boarddata[20][20];
   int data[20][20];
  // Health h;

public :
    Object(int [20][20]);

public slots:
    void move();



};



#endif // OBST_H


