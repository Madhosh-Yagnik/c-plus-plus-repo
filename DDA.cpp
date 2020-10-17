#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
#define round(val)(int)(val+0.5)
void line_dda(int ,int,int,int);

void main(){
int gd=DETECT,gm;
int x1,x2,y1,y2;

initgraph(&gd,&gm, "C:\\TC\\bgi");
cleardevice();
outtextxy(250,62," Madhosh Yagnik | 10318210028");

cout<<"Enter the value x1:";
cin>>x1;
cout<<"Enter the value y1:";
cin>>y1;
cout<<"enter the value x2:";
cin>>x2;
cout<<"enter the value y2:";
cin>>y2;
line_dda(x1,y1,x2,y2);
getch();
closegraph();
}

void line_dda(int x1,int y1,int x2,int yb){
int Dx=x2-x1,Dy=yb-y1 ,length,k;
float xin,yin,x=x1,y=y1;
if(abs(Dx)>abs(Dy))
length=abs(Dx);
else
length=abs(Dy);
xin=Dx/(float)length;
yin=Dy/(float)length;
for(k=0;k<length;k++){
x=x+xin;
y=y+yin;
for (int i=0; i<=15; i++)
{
putpixel(round(x),round(y),i);
}
}
}
