#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm,i,x,y;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 x=getmaxx()/2;
 y=getmaxy()/2;
 line(x,y,x,400);delay(700);
 line(x-60,y,x-60,400);delay(700);
 arc(x-30,y,0,180,40);delay(700);
 circle(x,y+190,30);delay(700);
 circle(x-60,y+190,30);delay(700);
 line(x+10,y,x-70,y);delay(700);

 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(25,240,"Press any key to increase the size");
    getch();
  for(i=0;i<=40;i=i+10)
 {
 line(x,y-i,x,400+i);
 line(x-60,y-i,x-60,400+i);
 arc(x-30,y-i,0,180,40);
 circle(x,y+190+i,30);
 circle(x-60,y+190+i,30);
 line(x+10,y-i,x-70,y-i);
 delay(500);
 cleardevice();
 }
 getch();
 closegraph();
}