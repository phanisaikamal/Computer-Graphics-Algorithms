#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
#include <dos.h>

int mod(float a){
if(a<0){
a = -1*a;
}
else{
a = a;
}
return a;
}

void main()
{
float x1,x2,y1,y2,dx,dy,m,d,z;
int gdriver = DETECT, gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
printf("Enter first point: ");
scanf("%f %f",&x1,&y1);
printf("Enter second point: ");
scanf("%f %f",&x2,&y2);
dx = x2 - x1;
dy = y2 - y1;
m = dy/dx;
cleardevice();
line(0,200,400,200);
line(200,0,200,400);
while(x1<=x2){
if(m>=1){
d = 2*dy - dx;
if(d < 0)
{
x1=x1+1;
y1=y1;
d = d + 2*dy;
}
else
{
x1=x1+1;
y1=y1+1;
d = d + 2*(dy - dx);
}
if(x1>=0&&y1>=0){
putpixel(200+mod(x1),200-mod(y1),RED);
}
else if(x1<0&&y1>0){
putpixel(200-mod(x1),200-mod(y1),RED);
}
else if(x1<0&&y1<0){
putpixel(200-mod(x1),200+mod(y1),RED);
}
else if(x1>0&&y1<0){
putpixel(200+mod(x1),200+mod(y1),RED);
}
}
else if(m<1&&m>=0){
d = 2*dx - dy;
if(d < 0)
{
x1=x1;
y1=y1+1;
d = d + 2*dx;
}
else
{
x1=x1+1;
y1=y1+1;
d = d + 2*(dx - dy);
}
if(x1>=0&&y1>=0){
putpixel(200+mod(x1),200-mod(y1),RED);
}
else if(x1<0&&y1>0){
putpixel(200-mod(x1),200-mod(y1),RED);
}
else if(x1<0&&y1<0){
putpixel(200-mod(x1),200+mod(y1),RED);
}
else if(x1>0&&y1<0){
putpixel(200+mod(x1),200+mod(y1),RED);
}
}
else if(m<0&&m>=-1){
d = 2*dx - dy;
if(d < 0)
{
x1=x1;
y1=y1-1;
d = d + 2*dx;
}
else
{
x1=x1+1;
y1=y1-1;
d = d + 2*(dx - dy);
}
if(x1>=0&&y1>=0){
putpixel(200+mod(x1),200-mod(y1),RED);
}
else if(x1<0&&y1>0){
putpixel(200-mod(x1),200-mod(y1),RED);
}
else if(x1<0&&y1<0){
putpixel(200-mod(x1),200+mod(y1),RED);
}
else if(x1>0&&y1<0){
putpixel(200+mod(x1),200+mod(y1),RED);
}
}
else if(m<-1){
d = 2*dy - dx;
if(d < 0)
{
x1=x1+1;
y1=y1;
d = d + 2*dy;
}
else
{
x1=x1+1;
y1=y1-1;
d = d + 2*(dy - dx);
}
if(x1>=0&&y1>=0){
putpixel(200+mod(x1),200-mod(y1),RED);
}
else if(x1<0&&y1>0){
putpixel(200-mod(x1),200-mod(y1),RED);
}
else if(x1<0&&y1<0){
putpixel(200-mod(x1),200+mod(y1),RED);
}
else if(x1>0&&y1<0){
putpixel(200+mod(x1),200+mod(y1),RED);
}
}
delay(100);
}
getch();
}