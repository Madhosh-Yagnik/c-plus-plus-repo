#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
 int gd=DETECT,gm,x,y;
 initgraph(&gd,&gm,NULL);
 line(0,0,100,100);
 getch();
 closegraph();
 return 0;
}
