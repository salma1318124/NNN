#include "sship.h"

sship::sship(int dataitem [20][20])
{
    row=6;
    column=8;
    QPixmap x("ship.png");
    x=x.scaledToWidth(150);
    x=x.scaledToHeight(150);
    setPixmap(x);
    setPos(50*column,50*row);
    for(int i=0;i<20;i++)
        for (int j=0;j<20;j++)
            data[i][j]=dataitem[i][j];

}
