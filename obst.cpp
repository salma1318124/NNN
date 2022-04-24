#include "obst.h"

obst::obst(int dataitem [20][20])
{
    row=5;
    column=5;
    QPixmap x("plannet.png");
    x=x.scaledToWidth(85);
    x=x.scaledToHeight(85);
    setPixmap(x);
    setPos(50*column,50*row);
    for(int i=0;i<20;i++)
        for (int j=0;j<20;j++)
            data[i][j]=dataitem[i][j];
}
