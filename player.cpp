#include "player.h"
#include "object.h"
#include <QGraphicsScene>
#include <QTimer>
#include "QGraphicsTextItem"
#include "QFont"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QFile>
#include <QTextStream>
#include <QGraphicsPixmapItem>
#include <QGraphicsSimpleTextItem>
#include "mainwindow.h"
#include <QSplashScreen>



player::player(int dataitem [20][20])
{







    QTimer * timer1 = new QTimer();
    QObject::connect(timer1,SIGNAL(timeout()),this,SLOT(spawn()));
    timer1 -> start (5000);


   row=1;
   column=1;
   QPixmap p("Tweety.png");
   p=p.scaledToWidth(50);
   p=p.scaledToHeight(50);
   setPixmap(p);
   setPos(50+50*column,50+50*row);
   for(int i=0;i<20;i++)
       for (int j=0;j<20;j++)
           data[i][j]=dataitem[i][j];
}
void player::keyPressEvent(QKeyEvent* event)
{
    if(event->key()==Qt::Key_Up&&data[row-1][column]!=-1&&data[row-1][column]!=-2)
    {
        row--;
    }
    else if(event->key()==Qt::Key_Down&&data[row+1][column]!=-1&&data[row+1][column]!=-2)
    {
        row++;
    }
    else if(event->key()==Qt::Key_Left&&data[row][column-1]!=-1&&data[row][column-1]!=-2)
    {
        column--;
    }
    else if(event->key()==Qt::Key_Right&&data[row][column+1]!=-1&&data[row][column+1]!=-2)
    {
        column++;
    }

//    else if(event->key()==Qt::Key_Right&&data[row][column+1] == -1)
//        {
//            column++;
//            QFile file("Board.txt");
//            file.close();
//            QFile file1("Room2.txt");
//            file1.open(QIODevice::ReadOnly);
//    }
    setPos(50+50*column,50+50*row);
}

void player::spawn()
{
    Object * object = new Object(data);
    scene()->addItem(object);


}
