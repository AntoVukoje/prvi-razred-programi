#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

main(){
    int n=7500,p,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0,nr=7500;
    int xp=1280, yp=720, xt,yt,b1=1,b2=2,b3=3,b4=4,b5=5,b6=6,b7=7,b8=8;

    srand(time(NULL));
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    initwindow(xp,yp);
    setbkcolor(0);
    cleardevice();

    while(i1<n && i2<n && i3<n && i4<n){
        xt=rand()%xp;
        yt=rand()%yp;
        if(xt<xp/8){
            putpixel(xt,yt,b1);
            i1++;
        }
        else if(xt<(xp/8)*2&&xt>(xp/8)*1){
            putpixel(xt,yt,b2);
            i2++;
        }
        else if(xt<(xp/8)*3&&xt>(xp/8)*2){
            putpixel(xt,yt,b3);
            i3++;
        }
        else if(xt<(xp/8)*4&&xt>(xp/8)*3){
            putpixel(xt,yt,b4);
            i4++;
        }
        else if(xt<(xp/8)*5&&xt>(xp/8)*4){
            putpixel(xt,yt,b5);
            i5++;
        }
        else if(xt<(xp/8)*6&&xt>(xp/8)*5){
            putpixel(xt,yt,b6);
            i6++;
        }
        else if(xt<(xp/8)*7&&xt>(xp/8)*6){
            putpixel(xt,yt,b7);
            i7++;
        }
        else if(xt<xp){
            putpixel(xt,yt,b8);
            i8++;
        }
    }
    n=nr,p,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0;
    while(i1<n && i2<n && i3<n && i4<n){
        xt=rand()%xp;
        yt=rand()%yp;
        if(xt<xp/8){
            putpixel(xt,yt,b7);
            i1++;
        }
        else if(xt<(xp/8)*2&&xt>(xp/8)*1){
            putpixel(xt,yt,b8);
            i2++;
        }
        else if(xt<(xp/8)*3&&xt>(xp/8)*2){
            putpixel(xt,yt,b5);
            i3++;
        }
        else if(xt<(xp/8)*4&&xt>(xp/8)*3){
            putpixel(xt,yt,b6);
            i4++;
        }
        else if(xt<(xp/8)*5&&xt>(xp/8)*4){
            putpixel(xt,yt,b3);
            i5++;
        }
        else if(xt<(xp/8)*6&&xt>(xp/8)*5){
            putpixel(xt,yt,b4);
            i6++;
        }
        else if(xt<(xp/8)*7&&xt>(xp/8)*6){
            putpixel(xt,yt,b1);
            i7++;
        }
        else if(xt<xp){
            putpixel(xt,yt,b2);
            i8++;
        }
    }
    n=nr,p,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0;
    while(i1<n && i2<n && i3<n && i4<n){
        xt=rand()%xp;
        yt=rand()%yp;
        if(xt<xp/8){
            putpixel(xt,yt,b7);
            i1++;
        }
        else if(xt<(xp/8)*2&&xt>(xp/8)*1){
            putpixel(xt,yt,b3);
            i2++;
        }
        else if(xt<(xp/8)*3&&xt>(xp/8)*2){
            putpixel(xt,yt,b8);
            i3++;
        }
        else if(xt<(xp/8)*4&&xt>(xp/8)*3){
            putpixel(xt,yt,b1);
            i4++;
        }
        else if(xt<(xp/8)*5&&xt>(xp/8)*4){
            putpixel(xt,yt,b7);
            i5++;
        }
        else if(xt<(xp/8)*6&&xt>(xp/8)*5){
            putpixel(xt,yt,b2);
            i6++;
        }
        else if(xt<(xp/8)*7&&xt>(xp/8)*6){
            putpixel(xt,yt,b5);
            i7++;
        }
        else if(xt<xp){
            putpixel(xt,yt,b6);
            i8++;
        }
    }

    getch();
    closegraph();
}
