#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    int gd = DETECT ,gm, i;
    float x, y,dx,dy,steps,xinc,yinc;
    int x0, x1, y0, y1;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    x0 = 50 , y0 = 50, x1 = 400, y1 = 300;
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
           {
        steps = dx;
    }
    else
           {
        steps = dy;
    }
    xinc = dx/steps;
    yinc = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    while(i<= steps)
    {
        putpixel(x, y, YELLOW);
        x += xinc;
        y += yinc;
        i=i+1;
    }
    getch();
    closegraph();
}
