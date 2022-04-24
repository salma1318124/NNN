#ifndef PLAYER_H
#define PLAYER_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QGraphicsRectItem>
#include <QObject>
class player :public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int row;
    int column;
    int data[20][20];
    int health;
public:
    player(int [20][20]);
public slots:
    void keyPressEvent(QKeyEvent* event);
    void spawn();

};
#endif // PLAYER_H
