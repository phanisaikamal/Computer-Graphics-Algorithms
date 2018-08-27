#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
#include <dos.h>

int round(float a){
float b = floor(a);
if((a-b)>=0.5){
a = b+1;
}
else{
a = b;
}
return a;
}

void main(){
float x1,y1,x2,y2,dx,dy,m,z,e,incX,incY;
int gdriver = DETECT, gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
printf("Enter first point: ");
scanf("%f %f",&x1,&y1);
printf("Enter second point: ");
scanf("%f %f",&x2,&y2);
dx = x2 - x1;
dy = y2 - y1;
m = dy/dx;
z = (dx>dy)?dx:dy;
int n = round(z);
int s;
for(int i=0;i<=1000;i++){
int a = pow(2,i);
if(n<a){
s = i;
break;
}
}
e = 1/(pow(2,s));
float x[1000],y[1000];
incX = e*dx;
incY = e*dy;
cleardevice();
line(0,200,400,200);
line(200,0,200,400);
for(i=0;i<=round(1/e);i++){
x[0] = x1;
y[0] = y1;
x[i+1] = x[i] + incX;
y[i+1] = y[i] + incY;
int a = round(x[i]);
int b = round(y[i]);
//printf("%d %d\n",a,b);
if(x>=0&&y>=0){
putpixel(200+a,200-b,RED);
}
else if(x<0&&y>0){
putpixel(200-a,200-b,RED);
}
else if(x<0&&y<0){
putpixel(200-a,200+b,RED);
}
else if(x>0&&y<0){
putpixel(200+a,200+b,RED);
}
delay(100);
}
getch();
}