#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;

initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
line(50,100,100,100);delay(1000);
line(100,100,150,50);delay(1000);
line(150,50,400,50); delay(1000);
line(400,50,450,100);delay(1000);
line(450,100,500,100);delay(1000);
line(500,100,500,150);delay(1000);
line(500,150,450,150);delay(1000);
circle(410,150,35);delay(1000);
circle(410,150,10);delay(1000);
line(375,150,200,150);delay(1000);
circle(165,150,35);delay(1000);
circle(165,150,10);delay(1000);
line(130,150,50,150);delay(1000);
line(50,150,50,100);delay(1000);



 int i;
 for(i=0;i<=1000;i=i+10)
 {
 setcolor(i+i*2);
line(50+i,100,100+i,100);
line(100+i,100,150+i,50);
line(150+i,50,400+i,50);
line(400+i,50,450+i,100);
line(450+i,100,500+i,100);
line(500+i,100,500+i,150);
line(500+i,150,450+i,150);
circle(410+i,150,35);
circle(410+i,150,10);
line(375+i,150,200+i,150);
circle(165+i,150,35);
circle(165+i,150,10);
line(130+i,150,50+i,150);
line(50+i,150,50+i,100);
delay(100);
cleardevice();
}

getch();
closegraph();
}
