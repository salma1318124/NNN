#include "obj.h"

obj::obj(int dataitem [20][20])
{

    row=11;
    column=15;
    QPixmap x("planet.png");
    x=x.scaledToWidth(85);
    x=x.scaledToHeight(85);
    setPixmap(x);
    setPos(50*column,50*row);
    for(int i=0;i<20;i++)
        for (int j=0;j<20;j++)
            data[i][j]=dataitem[i][j];

}
