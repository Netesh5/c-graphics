#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,x,y,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
for(i=30;i<=200;i++)
{
 setcolor(i/10);
 arc(x,y,0,180,10+i);
 delay(100);
}

 getch();
 closegraph();
}