#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
circle(200,100,60);delay(1000);
circle(170,90,10);delay(1000);
circle(230,90,10);delay(1000);
line(200,100,200,125);delay(1000);
arc(200,140,-180,-360,10);delay(1000);
line(200,160,200,300);delay(1000);
line(200,160,150,250);delay(1000);
line(200,160,250,250);delay(1000);
line(200,300,150,400);delay(1000);
line(200,300,250,400);delay(1000);
getch();
 closegraph();
}