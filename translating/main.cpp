
#include<iostream>
#include<graphics.h>
#include<conio.h>

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1= 200, y1= 150, x2= 300,y2=250;
    int tx= 50,ty= 50;

    std::cout << "Rectangle before translating ";
    setcolor(3);
    rectangle(x1,y1,x2,y2);
    setcolor(4);
    std::cout<<"Rectangle after translating";
    rectangle(x1+tx,y1+ty,x2+tx,y2+ty);

    getch();
    closegraph();

    return 0;
}
