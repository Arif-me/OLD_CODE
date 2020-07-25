#include<graphics.h>
#include<conio.h>
void main(){
    int gm, gd=DETECT;
    initgraph(&gd,&gm,"c:\\turboC3\\bgi");
    circle(100,100,50);
    setfillstyle(HATCH_FILL,RED);
    floodfill(100,100,RED);
    getch();
    closegraph();
}
