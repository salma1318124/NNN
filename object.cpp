#include "object.h"
#include "player.h"
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include <QDebug>
#include <stdlib.h>
#include <QTimer>
#include <QFile>
#include <QtWidgets>
#include <QGraphicsTextItem>
#include <QFont>
#include <QApplication>
#include "health.h"

Health * health;
Object::Object(int [20][20]) {


    row = 1;
    int randomNumb = rand() % 18+1;
    column = randomNumb;
    setPos(randomNumb,row);


         QPixmap x("Tree.png");
         x=x.scaledToWidth(75);
         x=x.scaledToHeight(75);
          setPixmap(x);


        QFile file("Board.txt");
        file.open(QIODevice::ReadOnly);

        // creating a text stream
        QTextStream stream(&file);
        // to read string from the file then convert it to int
        QString temp;

        // Reading from the file
        for (int i=0;i<20;i++)
            for (int j=0;j<20;j++)
            {
             stream>>temp;
             boarddata[i][j]=temp.toInt();
            }





        QTimer * timer = new QTimer (this);
        connect (timer, SIGNAL(timeout()), this, SLOT(move()));

        timer->start(250);



//        row=3;
//        column=9;
      // QPixmap x("Tree.png");
//         x=x.scaledToWidth(75);
//   x=x.scaledToHeight(75);
//    setPixmap(x);
//        setPos(50*column,50*row);
//        for(int i=0;i<20;i++)
//            for (int j=0;j<20;j++)
//                data[i][j]=dataitem[i][j];



}



void Object::move(){
    // move object down

    QList <QGraphicsItem*>colliding_items = collidingItems();


    setPos(50*column+50,50*row+50);

       row++;

   for (int i = 0, n = colliding_items.size(); i<n; i++){
       if (typeid(*(colliding_items[i]))==typeid(player))
       {


            health->decrease();

//           scene()->removeItem(colliding_items[i]);
//           scene()->removeItem(this);

       }
   }

  if (boarddata[row+1][column]==-1){
      setPos(column,1);

      this->row = 1;


   }



}



