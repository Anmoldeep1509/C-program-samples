/*program to implement rotation about an arbitary point*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm;
float x1d,y1d,a,a1,xp,yp,x2d,y2d,x1,y1,x2,y2,tx,ty,x1d1,x2d2,y1d1,y2d2;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,”c:\\tc\\bgi”);
setviewport(300,225,300,300,0);
line(0,0,400,0);
line(0,0,0,400);
line(0,-400,0,0);
line(-400,0,0,0);
printf(“Enter the co-ordinates\t”);
scanf(“%f %f %f %f”,&x1,&y1,&x2,&y2);
printf(“\nEnter the arbitary point\t”);
scanf(“%f %f”,&xp,&yp);
x1d=x1-xp;
y1d=y1-yp;
x2d=x2-xp;
y2d=y2-yp;
printf(“\nEnter the angle\t”);
scanf(“%f”,&a);
setcolor(4);
line(x1,y1,x2,y2);
delay(100);
getch();
setcolor(5);
line(x1d,y1d,x2d,y2d);
delay(100);
getch();
a1=(a*3.14)/180;
x1d1=x1d*cos(a1)-y1d*sin(a1);
y1d1=x1d*sin(a1)+y1d*cos(a1);
x2d2=x2d*cos(a1)-y2d*sin(a1);
y2d2=x2d*sin(a1)+y2d*cos(a1);
setcolor(8);
getch();
line(x1d1,y1d1,x2d2,y2d2);
delay(100);
x1d=x1d1+xp;
y1d=y1d1+yp;
x2d=x2d2+xp;
y2d=y2d2+yp;
setcolor(10);
getch();
line(x1d,y1d,x2d,y2d);
delay(100);
getch();
closegraph();
}