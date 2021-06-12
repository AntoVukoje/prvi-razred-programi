#include <stdio.h>
#include <graphics.h>
#include <conio.h>

main(){
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    circle(100, 100, 100);
    getch();
    closegraph();
}
