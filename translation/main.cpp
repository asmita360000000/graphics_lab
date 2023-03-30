#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
    int gd= DETECT,gm;
    initgraph(&gd, &gm, "");
    long x1= 200, y1= 200, x2= 300, y2=300;
    double a;
    std ::cout<<"Rectangle with rotation";
    setcolor(3);
    rectangle(x1,y1,x2,y2);
    std::cout<<"Angle of rotation";
    std::cin>>a;
    a=(a*3.14)/180;
    long xr=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
    long yr=y1+((x2-x1)*sin(a)-(y2-y1)*cos(a));
    setcolor(2);
    rectangle(x1,y1,xr,yr);
    getch();
    closegraph();
    return 0;


}
