#include "ship.h"
#include <QTimer>
ship::ship(int dataitem [20][20])
{
    row=8;
    column=10;
    QPixmap x("ship.png");
    x=x.scaledToWidth(150);
    x=x.scaledToHeight(150);
    setPixmap(x);
    setPos(50*column,50*row);
    for(int i=0;i<20;i++)
        for (int j=0;j<20;j++)
            data[i][j]=dataitem[i][j];



//   QTimer *timer = new QTimer(this);
//     connect(timer, SIGNAL(timeout()), this, SLOT(move()));

//      timer->start(600);

}

//void ship:: move()
//{
//int random_number = rand() % 2;
//    if(random_number == 0 && data[row][column-1]!=-1)
//    {
//       column -= 2;//left
//    }

//     if(random_number == 1 && data[row][column+1]!=-1)
//     {
//         column += 2;//right
//     }


//    setPos(50*column+50,50*row+50);
//}


