#include<graphics.h>
#include<winbgim.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm," ");
    setbkcolor(WHITE);
    circle(100,100,50);
    getch();
    closegraph();
    return 0;
 }
