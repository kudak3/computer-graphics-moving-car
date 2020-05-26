#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>



#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY 290
// #define GroundY ScreenHeight*0.75

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
}

if(op == 's') {

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



void clouds(){

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

void mountain(){
	//first triangle

	setcolor(WHITE);  //boundary of mountain
	setfillstyle(SOLID_FILL,GREEN); //actual color of mountain
	line(0,150,100,75);
	line(100,75,200,150);

	//2nd triangle
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	line(175,131,275,75);
	line(275,75,375,150);

	//3rd triangle
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	line(350,131,450,75);
	line(450,75,550,150);

	//2nd triangle
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	line(525,131,600,75);
	line(600,75,750,180);


	// foot of mountain
	line(0,150,750,150);
	floodfill(100,136,WHITE);
	floodfill(275,136,WHITE);
	floodfill(450,136,WHITE);
	floodfill(600,136,WHITE);


}

void road(){

//main road
	setcolor(WHITE);
	//cycle track
	line(0,290,250,290);
	line(310,290,700,290);

	//begining of road
	line(0,300,250,300);
	line(310,300,700,300);

	setlinestyle(CENTER_LINE,0,THICK_WIDTH);
	setcolor(YELLOW);
	line(0,330,700,330);

	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(WHITE);
	line(0,360,700,360);


	//road from mountain
	setcolor(WHITE);
	line(150,150,250,300);

	setlinestyle(CENTER_LINE,0,THICK_WIDTH);
	setcolor(YELLOW);
	line(180,150,280,300);


	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(WHITE);
	line(210,150,310,300);


}

// void pedestrian(int x,int ldisp){
	  

// //head
// circle(x,GroundY-50,10);
// line(x,GroundY-40,x,GroundY-30);
// //hand
// line(x,GroundY-30,x+ldisp,GroundY-10);
// line(x,GroundY-30,x-ldisp,GroundY-10);
// //legs
// line(x,GroundY-10,x+ldisp,GroundY);
// line(x,GroundY-10,x-ldisp,GroundY);
    


// }

// void spinningWheel(){

// 	 int i, j, midx, midy, radius;
//         int x[12], y[12];

//         /* initialize graphic mode */
//         initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
//         err = graphresult();

//         if (err != grOk) {
//                 /* error occurred */
//                 printf("Graphics Error: %s",
//                                 grapherrormsg(err));
//                 return 0;
//         }

//         /* mid position at x-axis & y-axis correspondingly */
//         midx = getmaxx() / 2;
//         midy = getmaxy() / 2;

//         /* radius of rim */
//         radius = 200;

//         /* finds the position of spokes */
//         calcPoints(radius, midx, midy, x, y);

//         /* drawing rim of the wheel */
//         setlinestyle(SOLID_LINE, 1, 3);
//         circle(midx, midy, radius);

//         /* rotate wheel until user hits any key on the keyboard */
//         while (!kbhit()) {
//                 setcolor(WHITE);
//                 /* spokes at angle 30, 90, 150, 210, 270, 330 */
//                 for (i = 0; i < 12; i++) {
//                         if (i % 2 == 0) {
//                                 line(midx, midy, x[i], y[i]);
//                         }
//                 }

//                  sleep for 100 milliseconds 
//                 delay(100);

//                 /* erase the above drawn spokes to get rotating illusion */
//                 for (i = 0; i < 12; i++) {
//                         setcolor(BLACK);
//                         if (i % 2 == 0) {
//                                 line(midx, midy, x[i], y[i]);
//                                 setcolor(WHITE);
//                                 putpixel(x[i], y[i], WHITE);
//                         }
//                 }

//                 /* spokes at 60, 120, 180, 240, 300, 360 */
//                 setcolor(WHITE);
//                 for (i = 0; i < 12; i++) {
//                         if (i % 2 != 0) {
//                                 line(midx, midy, x[i], y[i]);
//                         }
//                 }

//                 delay(100);

//                 /* erase the above drawn spokes to get rotating illusion */
//                 for (i = 0; i < 12; i++) {
//                         setcolor(BLACK);
//                         if (i % 2 != 0) {
//                                 line(midx, midy, x[i], y[i]);
//                                 setcolor(WHITE);
//                                 putpixel(x[i], y[i], WHITE);
//                         }
//                 }
//         }
// }

// void hut(){

// 	  /* wall of the house */
//         setcolor(DARKGRAY);
//         setfillstyle(SOLID_FILL, DARKGRAY);
// 	rectangle(midx - 100, midy + 25, midx + 100, midy + 175);
// 	floodfill(midx - 98, midy + 27, DARKGRAY);

// 	/* top of the house */
// 	setcolor(LIGHTRED);
// 	setfillstyle(SOLID_FILL, LIGHTRED);
// 	poly[0] = midx - 125, poly[1] = midy + 25;
// 	poly[2] = midx + 125, poly[3] = midy + 25;
// 	poly[4] = midx + 75, poly[5] = midy - 25;
// 	poly[6] = midx - 75, poly[7] = midy - 25;
// 	poly[8] = midx - 125, poly[9] = midy + 25;
// 	drawpoly(5, poly);
// 	floodfill(midx, midy, LIGHTRED);

// 	setcolor(BLACK);
// 	drawpoly(5, poly);

// 	poly[0] = midx - 75, poly[1] = midy - 25;
// 	poly[2] = midx + 75, poly[3] = midy - 25;
// 	poly[4] = midx, poly[5] = midy - 100;
// 	poly[6] = midx - 75, poly[7] = midy - 25;

// 	 setcolor(LIGHTRED);
// 	drawpoly(4, poly);
// 	floodfill(midx, midy - 95, LIGHTRED);

// 	setcolor(BLACK);
// 	drawpoly(4, poly);

// 	/* door for the house */
// 	setcolor(WHITE);
// 	setfillstyle(SLASH_FILL, WHITE);
// 	rectangle(midx, midy + 110, midx + 25, midy + 175);
// 	floodfill(midx + 1, midy + 112, WHITE);

// 	setfillstyle(BKSLASH_FILL, WHITE);
// 	rectangle(midx - 25, midy + 110, midx, midy + 175);
// 	floodfill(midx - 23, midy + 112, WHITE);

// 	/* window for the house */
// 	setfillstyle(LINE_FILL, WHITE);
// 	rectangle(midx + 25, midy + 50, midx + 75, midy + 90);
// 	floodfill(midx + 27, midy + 55, WHITE);


// }

void house(){
	float x=0.4,y=0.4;


	//walls

	line(400,200,400,270);                  //first edge
	line(330,194,330,250);                 //edge at the left
	line(540,210,540,240);                //edge at the back
	line(330,250,400,270);               //ground beneath door
	line(330,194,365,170);              //gable
	line(400,270,540,240);                    ///ground on right wall

	//roof
	line(360,165,410,210);         //right gable
	line(410,210,545,210);           //bottom right
	line(360,165,525,180);            //roof top
	line(525,180,545,210);            //gable at the back
	line(315,202,330,202);
	line(315,202,360,165);

	//door
	line(390,205,390,268);
	line(370,205,390,205);
	line(370,205,370,262);


	// left window

	line(340,205,360,205);
	line(340,225,360,225);
	line(340,205,340,225);
	line(360,205,360,225);
	line(350,205,350,225);         ///vertical divider

	//right window
	line(450,215,480,215);           //top
	line(450,235,480,235);           //bottom
	line(450,215,450,235);           //left
	line(480,215,480,235);           //right
	line(450,225,480,225);        //horizontal divider
	line(465,215,465,235);         //vertical divider

	setfillstyle(INTERLEAVE_FILL,LIGHTRED);
	floodfill(440,220,WHITE);
	setfillstyle(INTERLEAVE_FILL,LIGHTRED);
	floodfill(365,200,WHITE);
	setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);
	floodfill(470,220,WHITE);
	setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);
	floodfill(470,230,WHITE);
	setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);
	floodfill(460,220,WHITE);
	setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);
	floodfill(460,230,WHITE);
	setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);
	floodfill(345,210,WHITE);
	setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);
	floodfill(355,210,WHITE);
	setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);
	floodfill(380,210,WHITE);

    //loan color
	setfillstyle(INTERLEAVE_FILL,GREEN);
	floodfill(300,210,WHITE);

	//roof color
	setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);
	floodfill(380,210,WHITE);






















	// line(0,300*y,120*x,300*y);
	// line(530*x,300*y,650*x,300*y);
	// line(120*x,350*y,260*x,380*y);
	// line(247*x,379*y,247*x,230*y);
	// line(135*x,240*y,170*x,237*y);
	// line(135*x,240*y,170*x,135*y);

	// //window
	// line(135*x,300*y,170*x,300*y);
	// line(170*x,300*y,170*x,236*y);
	// line(152*x,300*y,152*x,237*y);

	// //gate
	// line(247*x,230*y,195*x,233*y);
	// line(195*x,233*y,195*x,368*y);
	// line(260*x,380*y,530*x,330*y); //down side at big window
	// line(530*x,330*y,530*x,275*y); //last wall at back side


	// //roof
	// line(260*x,220*y,285*x,250*y);
	// line(285*x,250*y,540*x,275*y);
	// line(260*x,380*y,260*x,220*y);  //right side wall with gate
	// line(495*x,200*y,540*x,275*y);
	// line(194*x,143*y,495*x,200*y);  //upper side of roof
	// line(200*x,150*y,194*x,143*y);   //edge of top of the roof
	// line(194*x,143*y,285*x,250*y);
	// line(195*x,143*y,93*x,245*y);   //roof at front from top to bottom
	// line(93*x,245*y,120*x,245*y);

	// // first wall at left
	// line(120*x,350*y,120*x,230*y);

	// //second window
	// line(120*x,230*y,200*x,150*y);
	// line(400*x,280*y,450*x,275*y);
	// line(450*x,275*y,450*x,315*y);
	// line(400*x,325*y,450*x,315*y);
	// line(400*x,324*y,400*x,279*y);
	// line(425*x,320*y,425*x,278*y);
	// line(450*x,296*y,400*x,382*y);

	// //circle on door
	// circle(205*x,300*y,5);

	// setfillstyle(1,0);
	// floodfill(0,295*y,15);
	// setfillstyle(1,2);
	// floodfill(0,305*y,15);
	// setfillstyle(2,6);
	// floodfill(125*x,350*y,15);
	// setfillstyle(2,6);
	// floodfill(525*x,330*y,15);
	// setfillstyle(9,RED);
	// floodfill(194*x,148*y,15);
	// setfillstyle(9,RED);
	// floodfill(490*x,200*y,15);




}

// void boat(){
// 	  int gdriver = DETECT, gmode, err;
//         int i = 0, j, x, y, x1, y1, x2, y2;

//         initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
//         err = graphresult();

//         if (err != grOk) {
//                 printf("Graphics Error: %s\n",
//                                 grapherrormsg(err));
//                 return 0;
//         }

//         j = 0;

//         /* initialize position for boat */
//         x = 50, y = getmaxy() / 2 + 140;

//         while (x + 60 < getmaxx() && (!kbhit())) {
//                 /* setting positions for rain */
//                 x1 = 10, i = y1 = 0;
//                 x2 = 0, y2 = 50;

//                 /* clears graphic screen */
//                 cleardevice();

//                 /* setting the color of the river/sea */
//                 setcolor(LIGHTBLUE);
//                 setlinestyle(SOLID_LINE, 1, 1);
//                 setfillstyle(SOLID_FILL, LIGHTBLUE);

//                 /* draw the river/sea */
//                 rectangle(0, getmaxy() / 2 + 150, getmaxx(), getmaxy());
//                 floodfill(getmaxx() - 10, getmaxy() - 10, LIGHTBLUE);

//                 /* rain drops */
//                 setlinestyle(DASHED_LINE, 1, 2);
//                 while (i< 700 ) {
//                         line(x1, y1, x2, y2);
//                         x1 = x1 + 20;
//                         y2 = y2 + 50;
//                         i++;
//                 }

//                 /* drawing the boat */
//                 setlinestyle(SOLID_LINE, 1, 2);
//                 setcolor(BROWN);
//                 setfillstyle(SOLID_FILL, BROWN);
//                 sector(x, y, 180, 360, 50, 10);

//                 setcolor(DARKGRAY);
//                 setlinestyle(SOLID_LINE, 1, 3);

//                 /* leg and body of stick man */
//                 line(x + 40, y - 15, x + 40, y - 40);
//                 line(x + 40, y - 15, x + 45, y - 10);
//                 line(x + 45, y - 10, x + 45, y);
//                 line(x + 40, y - 15, x + 37, y);

//                 /* head and hand of stick man */
//                 circle(x + 40, y - 45, 5);
//                 line(x + 40, y - 35, x + 50, y - 30);
//                 line(x + 40, y - 35, x + 35, y - 32);
//                 line(x + 35, y - 32, x + 45, y - 25);
//                 line(x + 60, y - 45, x + 27, y + 10);

//                 /* moving the position of boat and stick man */
//                 x++;

//                 setcolor(LIGHTBLUE);
//                 delay(250);

//                 /* clears the graphic device */
//                 cleardevice();

//                 /* drawing sea/river */
//                 setlinestyle(SOLID_LINE, 1, 1);
//                 setfillstyle(SOLID_FILL, LIGHTBLUE);
//                 rectangle(0, getmaxy() / 2 + 150, getmaxx(), getmaxy());
//                 floodfill(getmaxx() - 10, getmaxy() - 10, LIGHTBLUE);

//                 /* rain drops */
//                 setlinestyle(DASHED_LINE, 1, 2);
//                 x1 = 10, i = y1 = 0;
//                 x2 = 0, y2 = 70;

//                 while (i < 700) {
//                         line(x1, y1, x2, y2);
//                         x1 = x1 + 30;
//                         y2 = y2 + 60;
//                         i++;
//                 }

//                 /* drawing boat */
//                 setlinestyle(SOLID_LINE, 1, 1);
//                 setcolor(BROWN);
//                 setfillstyle(SOLID_FILL, BROWN);
//                 sector(x, y, 180, 360, 50, 10);

//                 /* body and leg of stic man */
//                 setcolor(DARKGRAY);
//                 setlinestyle(SOLID_LINE, 1, 3);
//                 line(x + 40, y - 15, x + 40, y - 40);
//                 line(x + 40, y - 15, x + 45, y - 10);
//                 line(x + 45, y - 10, x + 45, y);
//                 line(x + 40, y - 15, x + 37, y);


//                 /* head, hands of stick man */
//                 circle(x + 40, y - 45, 5);
//                 line(x + 40, y - 35, x + 52, y - 30);
//                 line(x + 40, y - 35, x + 37, y - 32);
//                 line(x + 37, y - 32, x + 49, y - 25);
//                 line(x + 60, y - 45, x + 27, y + 10);

//                 /* forwarding the position of the boat */
//                 x++;

//                 /* sleep for 250 milliseconds */
//                 delay(250);

//                 /* clears the graphic device */
//                 cleardevice();
//                 j++;
//         }

//         getch();

//         /* deallocate memory allocated for graphic screen */
//         closegraph();
//         return 0;
//   }

// }

// void secondCar(){
// 	  /* request auto detection */
//         int gdriver = DETECT, gmode, err;
//         int i, maxx, midy;

//         /* initialize graphic mode */
//         initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
//         err = graphresult();

//         if (err != grOk) {
//                 /* error occurred */
//                 printf("Graphics Error: %s\n",
//                                 grapherrormsg(err));
//                 return 0;
//         }

//         /* max position in x-axis */
//         maxx = getmaxx();
//         /* mid position in y-axis */
//         midy = getmaxy() / 2;

//         for (i = 0; i < maxx - 125; i = i + 3) {
//                 /* clears the graphic screen */
//                 cleardevice();

//                 /* draw a white road */
//                 setcolor(WHITE);
//                 line(0, midy + 37, maxx, midy + 37);

//                 /* body of the car */
//                 setcolor(YELLOW);
//                 setfillstyle(SOLID_FILL, YELLOW);

//                 line(0 + i, midy + 23, 0 + i, midy);
//                 line(0 + i, midy, 20 + i, midy);
//                 line(20 + i, midy, 40 + i, midy - 20);
//                 line(40 + i, midy - 20, 80 + i, midy - 20);
//                 line(80 + i, midy - 20, 100 + i, midy);
//                 line(100 + i, midy, 120 + i, midy);
//                 line(120 + i, midy, 120 + i, midy + 23);
//                 line(0 + i, midy + 23, 18 + i, midy + 23);
//                 arc(30 + i, midy + 23, 0, 180, 12);
//                 line(42 + i, midy + 23, 78 + i, midy + 23);
//                 arc(90 + i, midy + 23, 0, 180, 12);
//                 line(102 + i, midy + 23, 120 + i, midy + 23);

//                 line(28 + i, midy, 43 + i, midy - 15);
//                 line(43 + i, midy - 15, 57 + i, midy - 15);
//                 line(57 + i, midy - 15, 57 + i, midy);
//                 line(57 + i, midy, 28 + i, midy);

//                 line(62 + i, midy - 15, 77 + i, midy - 15);
//                 line(77 + i, midy - 15, 92 + i, midy);
//                 line(92 + i, midy, 62 + i, midy);
//                 line(62 + i, midy, 62 + i, midy - 15);
//                 floodfill(5 + i, midy + 22, YELLOW);
//                 setcolor(DARKGRAY);

//                 /* draw wheels of the car */
//                 if (i % 2 == 0) {
//                         setfillstyle(SLASH_FILL, DARKGRAY);
//                 } else {
//                         setfillstyle(BKSLASH_FILL, DARKGRAY);
//                 }

//                 circle(30 + i, midy + 25, 9);
//                 circle(90 + i, midy + 25, 9);
//                 floodfill(30 + i, midy + 25, DARKGRAY);
//                 floodfill(90 + i, midy + 25, DARKGRAY);
//                 delay(250);
//         }


//         getch();

//         /* deallocate memory allocated for graphic screen */
//         closegraph();
//         return 0;
// }

// void truck(){
// 	 /* request auto detection */
//         int gdriver = DETECT, gmode, err;
//         int i, x1, y1, x2, y2, maxx, midy;

//         /* initialize graphic mode */
//         initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");

//         err = graphresult();

//         if (err != grOk) {
//                 /* error occurred */
//                 printf("Graphics Error: %s\n",
//                                 grapherrormsg(err));
//                 return 0;
//         }

//         /* max position in x-axis */
//         maxx = getmaxx();
//         /* mid position in y-axis */
//         midy = getmaxy() / 2;

//         /* assign positions to draw road */
//         x1 = 0, y1 = midy + 43;
//         x2 = maxx, y2 = midy + 43;

//         for (i = 0; i < maxx - 130; i = i + 3) {
//                 /* clears the graphic screen */
//                 cleardevice();

//                 /* draw the road */
//                 setcolor(WHITE);
//                 line(x1, y1, x2, y2);

//                 /* draw the dump bed(backside) of truck */
//                 setcolor(LIGHTGRAY);
//                 setfillstyle(SOLID_FILL, LIGHTGRAY);
//                 line(0 + i, midy, 80 + i, midy);
//                 line(80 + i, midy, 80 + i, midy + 30);
//                 line(80 + i, midy + 30, 47 + i, midy + 30);
//                 line(0 + i, midy + 30, 23 + i, midy + 30);
//                 line(0 + i, midy + 30, 0 + i, midy);
//                 arc(35 + i, midy + 30, 0, 180, 12);
//                 floodfill(5 + i, midy + 5, LIGHTGRAY);

//                 /* draw the cab of truck */
//                 setcolor(YELLOW);
//                 setfillstyle(SOLID_FILL, YELLOW);
//                 line(81 + i, midy + 30, 81 + i, midy - 40);
//                 line(82 + i, midy - 40, 111 + i, midy - 40);
//                 line(111 + i, midy - 40, 126 + i, midy - 10);
//                 line(126 + i, midy - 10, 126 + i, midy + 30);
//                 line(126 + i, midy + 30, 117 + i, midy + 30);
//                 line(93 + i, midy + 30, 81 + i, midy + 30);
//                 arc(105 + i, midy + 30, 0, 180, 12);

//                 /* window */
//                 line(87 + i, midy - 5, 118 + i, midy - 5);
//                 line(87 + i, midy - 5, 87 + i, midy - 30);
//                 line(87 + i, midy - 30, 106 + i, midy - 30);
//                 line(106 + i, midy - 30, 118 + i, midy - 5);
//                 floodfill(85 + i, midy + 25, YELLOW);

//                 setcolor(DARKGRAY);
//                 if (i % 2 == 0) {
//                         setfillstyle(SLASH_FILL, DARKGRAY);
//                 } else {
//                         setfillstyle(BKSLASH_FILL, DARKGRAY);
//                 }

//                 /* draw the tyres */
//                 circle(35 + i, midy + 30, 8);
//                 circle(105 + i, midy + 30, 8);
//                 floodfill(35 + i, midy + 30, DARKGRAY);
//                 floodfill(105 + i, midy + 30, DARKGRAY);

//                 /* sleep for 275 milliseconds */
//                 delay(275);
//         }

//         getch();

//         /* deallocate memory allocated for graphic screen */
//         closegraph();
//         return 0;
// }

void main(){


int i,j;
int x = 0;
	int wheel_radius = 30,
	arc_radius = 35,
	rim_radius = 22 ;
	char t='t';                                //to be used for translation
    char s='s';                             //to be used for scaling
    int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	outtextxy(25,10,"Kudakwashe Kuzvindiwana N0162653E");

	//###################Clouds##############

	clouds();

	sun();
	mountain();


	//############### Trees ############

	//#################tree1##########
	drawTree(t,0,0);

	//##################Tree2##########

	 drawTree(t,30,0);


	//##################### Tree 3 ###########

	drawTree(t,60,0);


	//road
	road();


	// pedestrian(x,ldisp);
	//hut();

	house();
	









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
