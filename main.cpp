#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QFile>
#include <QTextStream>
#include <QGraphicsPixmapItem>
#include "player.h"
#include "mainwindow.h"
#include <QSplashScreen>
#include <QTimer>
#include "object.h"
#include "obj.h"
#include "obst.h"
#include "ship.h"
#include "shhip.h"
#include "sship.h"
#include "health.h"


//#include <bullet.h>
//#include <enemy.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // creating a view
    QGraphicsView view;
    view.setFixedSize(1000,1000);
    view.setWindowTitle("Tweety Game");
    //view.setBackgroundBrush(QBrush(Qt::black));
    QBrush brush(Qt::black);
    view.setBackgroundBrush(brush);

    // creating a scene
    QGraphicsScene scene;


    // creating a file object
    QFile file("Board.txt");
    file.open(QIODevice::ReadOnly);






    // creating a text stream
    QTextStream stream(&file);
    int boarddata[20][20];
    // to read string from the file then convert it to int
    QString temp;

    // Reading from the file
    for (int i=0;i<20;i++)
        for (int j=0;j<20;j++)
        {
         stream>>temp;
         boarddata[i][j]=temp.toInt();
        }
    QGraphicsPixmapItem dataimage[20][20];
    QPixmap bricks("Bricks");
    QPixmap grass("Grass");

    grass=grass.scaledToWidth(50);
    grass=grass.scaledToHeight(50);

    bricks=bricks.scaledToWidth(50);
    bricks=bricks.scaledToHeight(50);

    for (int i=0;i<20;i++)
        for (int j=0;j<20;j++)
        {
            if(boarddata[i][j]== -1)
                dataimage[i][j].setPixmap(bricks);
            else
                dataimage[i][j].setPixmap(grass);
            dataimage[i][j].setPos(50+50*j,50+50*i);
            scene.addItem(&dataimage[i][j]);
        }




    player p(boarddata);
  //  Enemy x(boarddata);
   // Bullet y(boarddata);

    scene.addItem(&p);
    p.setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    p.setFocus();


      Object x(boarddata);
  scene.addItem(&x);
    x.setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    x.setFocus();




   obj y(boarddata);
   scene.addItem(&y);
  y.setFlag(QGraphicsPixmapItem::ItemIsFocusable);
  y.setFocus();

   obst z(boarddata);
    scene.addItem(&z);
     z.setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    z.setFocus();

    ship t(boarddata);
     scene.addItem(&t);
      t.setFlag(QGraphicsPixmapItem::ItemIsFocusable);
     t.setFocus();

     shhip g(boarddata);
      scene.addItem(&g);
       g.setFlag(QGraphicsPixmapItem::ItemIsFocusable);
      g.setFocus();

      sship j(boarddata);
       scene.addItem(&j);
        j.setFlag(QGraphicsPixmapItem::ItemIsFocusable);
       j.setFocus();

       Health n(boarddata);
        scene.addItem(&n);
         n.setFlag(QGraphicsPixmapItem::ItemIsFocusable);
        n.setFocus();





   // QTimer *timer = new QTimer;
  //  QObject::connect(timer, SIGNAL(timeout()), x, SLOT(spawn()));

    /*  scene.addItem(&y);
    p.setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    p.setFocus(); */

    view.setScene(&scene);
    view.show();


    return a.exec();
}
