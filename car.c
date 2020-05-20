#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>



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

void drawTree(char op,int x,int y){

	// crown

	setcolor(WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	if(op == 't'){
	line(240+x,420+y,275+x,420+y);
	line(240+x,420+y,245+x,405+y);
	line(275+x,420+y,270+x,405+y);
	line(245+x,405+y,240+x,405+y);
	line(270+x,405+y,275+x,405+y);
	line(240+x,405+y,245+x,390+y);
	line(275+x,405+y,270+x,390+y);
	line(245+x,390+y,240+x,390+y);
	line(270+x,390+y,275+x,390+y);
	line(240+x,390+y,258+x,370+y);
	line(275+x,390+y,257+x,370+y);
	floodfill(259+x,375+y,WHITE);

	//Tree 1 trunk
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	line(250+x,460+y,250+x,420+y);
	line(265+x,460+y,265+x,420+y);
	line(250+x,460+y,265+x,460+y);
	line(250+x,420+y,265+x,420+y);
	floodfill(255+x,441+y,WHITE);
} else {

	line(240*x,420*y,275*x,420*y);
	line(240*x,420*y,245*x,405*y);
	line(275*x,420*y,270*x,405*y);
	line(245*x,405*y,240*x,405*y);
	line(270*x,405*y,275*x,405*y);
	line(240*x,405*y,245*x,390*y);
	line(275*x,405*y,270*x,390*y);
	line(245*x,390*y,240+x,390*y);
	line(270*x,390*y,275+x,390*y);
	line(240*x,390*y,258+x,370*y);
	line(275*x,390*y,257+x,370*y);
	floodfill(259*x,375*y,WHITE);

	//Tree 1 trunk
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	line(250*x,460*y,250+x,420*y);
	line(265*x,460*y,265+x,420*y);
	line(250*x,460*y,265+x,460*y);
	line(250*x,420*y,265*x,420*y);
	floodfill(255*x,441*y,WHITE);
}

}

void sun(){
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	arc(178,112,0,180,30);
	floodfill(171,109,WHITE);

	setfillstyle(SOLID_FILL,BLUE);
	floodfill(50,50,WHITE);
}

clouds(){

	//###############Left Cloud###############

	ellipse(40,30,60,240,10,15);
	ellipse(65,20,345,165,20,15);
	ellipse(105,27,340,160,20,15);
	ellipse(109,42,230,50,20,10);
	ellipse(66,46,163,340,31,17);

	//###############Middle Cloud#############

	ellipse(200,30,60,240,10,15);
	ellipse(225,20,345,165,20,15);
	ellipse(262,27,340,160,20,15);
	ellipse(268,42,230,50,20,10);
	ellipse(226,46,163,340,31,15);
	ellipse(300,21,20,182,21,19);
	ellipse(325,31,290,100,21,15);
	ellipse(299,45,228,20,33,11);

	//###############Right Cloud #############

	ellipse(450,30,60,240,10,15);
	ellipse(475,20,345,165,20,15);
	ellipse(512,27,340,160,20,15);
	ellipse(518,42,230,50,20,10);
	ellipse(476,46,163,340,31,15);



}

void main(){


int i,j;
int x = 0;
	int wheel_radius = 30,
	arc_radius = 35,
	rim_radius = 22 ;
	char t='t';                                //to be used for translation
    char s = 's';                             //to be used for scaling 
    int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	outtextxy(25,10,"Kudakwashe Kuzvindiwana N0162653E");

	//###################Clouds##############

	clouds();

	//############### Sun ###############
	sun();


	//############### Trees ############

	//#################tree1##########
	drawTree(t,0,0);

	//##################Tree2##########

	drawTree(t,200,-190);


	//##################### Tree 3 ###########

	drawTree(s,0.5,0.5);









// for (i = 0,j=0; i <= 500; i++){
// putpixel(200,300,15);
// }



// 	for (i = 0,j=0; i <= 500; i++,j++)
// 	{
// 			int x1 = 150, y1 = 110, x2 = 400, y2 = 100;
// 	int x3 = 475, y3 = 175, x4 = 600, y4 = 200;
// 	int y5 = 300, x6 = 540, x7 = 470, x8 = 220;
// 	int x9 = 150, x10 = 100, y6 = 180;




// 		//road
// 	line(0,y5+30,1000,y5+30);

// 		x1 = x1+i;
// 		x2 = x2+i;
// 		x3 = x3+i;
// 		x4 = x4+i;
// 		x6 = x6+i;
// 		x7 = x7+i;
// 		x8 = x8+i;
// 		x9 = x9+i;
// 		x10 = x10+i;



// 	//roof
// 	line(x1,y1,x2,y2);
// 	//frontscreen
// 	line(x2,y2,x3,y3);
// 	//bonet
// 	line(x3,y3, x4-10,y3);
// 	line(x4-10,y3,x4,y3+10);
// 	//front
// 	line(x4,y3+10,x4,y5-20);
// 	//bottom
// 	line(x4,y5-20,x6,y5);
// 	line(x7,y5,x8,y5);
// 	line(x9,y5,x10,y5-30);
// 	//back
// 	line(x10,y5-30,x10,y6);

// 	//rearscreen
// 	line(x10,y6,x1,y1);

// 	//front door window
// 	line(x2,y2+20,x3-20,y6);
// 	line(x2-80,y2+20,x2,y2+20);
// 	line(x2-80,y2+20,x2-80,y6);
// 	line(x2-80,y6,x3-20,y6);
// 	//doors
// 	//front door
// 	line(x2,y2+10,x3-10,y6);
// 	line(x1+10,y1+5,x2,y2+10);
// 	line(x2-90,y2+12,x2-90,y5-20);
// 	line(x3-10,y6,x3-10,y5-20);
// 	//door handle
// 	line(x2-80,y6+20,x2-70,y6+20);

// 	//bottom door line
// 	line(x7+5,y5-20,x8-5,y5-20);
// 	//backdoor
// 	line(x10+90,y6,x1+70,y2+15);
// 	line(x10+90,y6,x10+90,y5-35);
// 	//door handle
// 	line(x10+100,y6+20,x10+110,y6+20);


// 	//horizontal divider
// 	line(x4,y6+10,x10,y6+10);



// 	//back door window
// 	line(x1+80,y2+20,x2-100,y2+20);
// 	line(x10+100,y6,x1+80,y2+20);
// 	line(x2-100,y2+20,x2-100,y6);
// 	line(x10+100,y6,x2-100,y6);


// 	//backwindow
// 	line(x1+10,y1+10,x1+50,y1+10);
// 	line(x1+10,y1+10,x10+20,y6);
// 	line(x10+20,y6,x10+80,y6);
// 	line(x10+80,y6,x1+50,y1+10);

// 	//wheels
// 	//front
// 	arc(x6-35,y5,180,0,arc_radius);
// 	circle(x6-35,y5,wheel_radius);
// 	circle(x6-35,y5,rim_radius);
// 	circle(x6-35,y5,10);
// 	circle(x6-35,y5,5);
// 	//back
// 	arc(x9+35,y5,180,0,arc_radius);
// 	circle(x9+35,y5,wheel_radius);
// 	circle(x9+35,y5,rim_radius);
// 	circle(x9+35,y5,10);
// 	circle(x9+35,y5,5);

// 	 //Draw Ground
//    Rain(x);
//    x=(x+2)%ScreenWidth;

// 		 cleardevice();

// 	}

	getch();
	closegraph();

}
