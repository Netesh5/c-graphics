#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(i=0;i<=520;i=i+10)
{
line(50+i,100,500+i,100);
line(50+i,100,50+i,400);
line(50+i,400,100+i,400);
circle(150+i,400,45);
line(195+i,400,295+i,400);
circle(340+i,400,45);
line(385+i,400,500+i,400);
line(500+i,400,500+i,100);
delay(100);
cleardevice();
}
getch();
closegraph();
}
