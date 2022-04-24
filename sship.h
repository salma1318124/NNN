#ifndef SSHIP_H
#define SSHIP_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QObject>


class sship: public QObject, public QGraphicsPixmapItem {

    Q_OBJECT
    int row;
    int column;
    int data[20][20];
    //bool move;


public:
    sship(int [20][20]);
};

#endif // SSHIP_H
