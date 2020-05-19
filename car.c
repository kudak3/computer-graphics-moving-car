#include <graphics.h>
#include <stdio.h>

#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.75

int ldisp=0;

void Rain(int x)
{
int i,rx,ry;
for(i=0;i<400;i++)
{
 rx=rand() % ScreenWidth;
 ry=rand() % ScreenHeight;
 if(ry<GroundY-4)
 {
  if(ry<GroundY-120 || (ry>GroundY-120 && (rx<x-20 || rx>x+60)))
  line(rx,ry,rx+0.5,ry+4);
 }
}
}



void main(){


int i,j;
int x = 0;
	int wheel_radius = 30,
	arc_radius = 35,
	rim_radius = 22 ;

	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	outtextxy(25,10,"Kudakwashe Kuzvindiwana N0162653E");



	//mountains

    //1st traingle
	setcolor(GREEN);

	line(0,150,100,75);
	line(100,75,200,150);

	//2nd triangle
	setcolor(GREEN);
	line(175,130,275,75);
	line(275,75,375,150);

	//3rd triangle
	setcolor(GREEN);

	line(350,130,450,75);
	line(450,75,550,150);

	//4th triangle
	setcolor(GREEN);
	line(525,130,600,75);
	line(600,75,750,180);

	//bottom of mountain
	line(0,150,750,150);

	floodfill(100,136,WHITE); //
	floodfill(275,136,WHITE);
	floodfill(450,136,WHITE);
	floodfill(600,136,WHITE);





for (i = 0,j=0; i <= 500; i++){
putpixel(200,300,15);
}



	for (i = 0,j=0; i <= 500; i++,j++)
	{
			int x1 = 150, y1 = 110, x2 = 400, y2 = 100;
	int x3 = 475, y3 = 175, x4 = 600, y4 = 200;
	int y5 = 300, x6 = 540, x7 = 470, x8 = 220;
	int x9 = 150, x10 = 100, y6 = 180;




		//road
	line(0,y5+30,1000,y5+30);

		x1 = x1+i;
		x2 = x2+i;
		x3 = x3+i;
		x4 = x4+i;
		x6 = x6+i;
		x7 = x7+i;
		x8 = x8+i;
		x9 = x9+i;
		x10 = x10+i;



	//roof
	line(x1,y1,x2,y2);
	//frontscreen
	line(x2,y2,x3,y3);
	//bonet
	line(x3,y3, x4-10,y3);
	line(x4-10,y3,x4,y3+10);
	//front
	line(x4,y3+10,x4,y5-20);
	//bottom
	line(x4,y5-20,x6,y5);
	line(x7,y5,x8,y5);
	line(x9,y5,x10,y5-30);
	//back
	line(x10,y5-30,x10,y6);

	//rearscreen
	line(x10,y6,x1,y1);

	//front door window
	line(x2,y2+20,x3-20,y6);
	line(x2-80,y2+20,x2,y2+20);
	line(x2-80,y2+20,x2-80,y6);
	line(x2-80,y6,x3-20,y6);
	//doors
	//front door
	line(x2,y2+10,x3-10,y6);
	line(x1+10,y1+5,x2,y2+10);
	line(x2-90,y2+12,x2-90,y5-20);
	line(x3-10,y6,x3-10,y5-20);
	//door handle
	line(x2-80,y6+20,x2-70,y6+20);

	//bottom door line
	line(x7+5,y5-20,x8-5,y5-20);
	//backdoor
	line(x10+90,y6,x1+70,y2+15);
	line(x10+90,y6,x10+90,y5-35);
	//door handle
	line(x10+100,y6+20,x10+110,y6+20);


	//horizontal divider
	line(x4,y6+10,x10,y6+10);



	//back door window
	line(x1+80,y2+20,x2-100,y2+20);
	line(x10+100,y6,x1+80,y2+20);
	line(x2-100,y2+20,x2-100,y6);
	line(x10+100,y6,x2-100,y6);


	//backwindow
	line(x1+10,y1+10,x1+50,y1+10);
	line(x1+10,y1+10,x10+20,y6);
	line(x10+20,y6,x10+80,y6);
	line(x10+80,y6,x1+50,y1+10);

	//wheels
	//front
	arc(x6-35,y5,180,0,arc_radius);
	circle(x6-35,y5,wheel_radius);
	circle(x6-35,y5,rim_radius);
	circle(x6-35,y5,10);
	circle(x6-35,y5,5);
	//back
	arc(x9+35,y5,180,0,arc_radius);
	circle(x9+35,y5,wheel_radius);
	circle(x9+35,y5,rim_radius);
	circle(x9+35,y5,10);
	circle(x9+35,y5,5);

	 //Draw Ground
   Rain(x);
   x=(x+2)%ScreenWidth;

		 cleardevice();

	}

	getch();
	closegraph();

}
