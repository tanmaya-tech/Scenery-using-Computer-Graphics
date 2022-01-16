#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");

	setcolor(BROWN);
	int arr[10]={200,200,350,200,410,300,260,300,200,200};
	drawpoly(5,arr);
	int ar[8]={135,300,135,380,265,380,265,300};
	drawpoly(4,ar);
	int a[6]={265,380,400,350,400,300};
	drawpoly(3,a);
	line(200,200,130,305);
	line(202,202,135,303);

	line(400,340,700,340);
	line(0,340,135,340);

	circle(500,100,40);

	rectangle(175,380,215,320);

	setfillstyle(1,BROWN);
	floodfill(200,201,6);
	setfillstyle(6,BROWN);
	floodfill(300,250,6);
	setfillstyle(1,14);
	floodfill(200,210,6);
	setfillstyle(1,14);
	floodfill(300,310,6);
	setfillstyle(9,12);
	floodfill(200,330,6);
	setfillstyle(1,GREEN);
	floodfill(200,400,6);
	setfillstyle(1,CYAN);
	floodfill(100,100,6);
	setfillstyle(1,14);
	floodfill(500,100,6);

	getch();
	closegraph();
}
