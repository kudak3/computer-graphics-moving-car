#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>



#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY 290
// #define GroundY ScreenHeight*0.75

int ldisp=0;



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
	line(0,290,245,290);
	line(305,290,700,290);

	//track color
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(100,295,WHITE);




	//begining of road
	line(0,300,250,300);
	line(310,300,700,300);

	setlinestyle(CENTER_LINE,0,THICK_WIDTH);
	setcolor(WHITE);
	line(0,330,700,330);

	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(WHITE);
	line(0,360,700,360);


	//road from mountain
	setcolor(WHITE);
	line(150,150,250,300);

	setlinestyle(CENTER_LINE,0,THICK_WIDTH);
	setcolor(WHITE);
	line(180,150,280,300);




	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(WHITE);
	line(210,150,310,300);

	//road color
	setfillstyle(INTERLEAVE_FILL,DARKGRAY);
	floodfill(255,295,WHITE);




}

void pedestrian(int x,int ldisp){


//head
circle(x,GroundY-45,5);
line(x,GroundY-40,x,GroundY-30);
//hand
line(x,GroundY-30,x+ldisp,GroundY-10);
line(x,GroundY-30,x-ldisp,GroundY-10);
//legs
line(x,GroundY-10,x+ldisp,GroundY);
line(x,GroundY-10,x-ldisp,GroundY);



}


void hut(){


	  /* wall of the house */

	rectangle(45,204,105,260);
	setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);
	floodfill(50,250,WHITE);


	//roof
	line(35,204,75,160);
	line(75,160,115,204);
	line(35,204,50,204);
	line(100,204,115,204);
	setfillstyle(LTBKSLASH_FILL,LIGHTGRAY);
	floodfill(70,170,WHITE);

	//door
	rectangle(60,225,80,260);
	setfillstyle(LINE_FILL,LIGHTGRAY);
	floodfill(70,230,WHITE);


	//window
	rectangle(85,210,100,220);
	setfillstyle(LINE_FILL,LIGHTGRAY);
	floodfill(90,215,WHITE);


	rectangle(50,210,60,220);
	setfillstyle(LINE_FILL,LIGHTGRAY);
	floodfill(55,215,WHITE);

	  //loan color
	setfillstyle(INTERLEAVE_FILL,GREEN);
	floodfill(110,260,WHITE);




}

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
	setfillstyle(LTBKSLASH_FILL,LIGHTGRAY);
	floodfill(440,200,WHITE);
    setfillstyle(LTBKSLASH_FILL,LIGHTGRAY);
	floodfill(330,193,WHITE);



}

void boat(int i){



	/* initialize position for boat */
       int x = 180,y = ScreenHeight / 2 + 200;



		/* drawing the boat */
		setlinestyle(SOLID_LINE, 1, 2);
		setcolor(BROWN);
		setfillstyle(SOLID_FILL, BROWN);
		sector((x + i), y, 180, 360, 50, 10);

		setcolor(LIGHTGRAY);
		setlinestyle(SOLID_LINE, 1, 3);

		/* leg and body of stick man */
		line(x + 40 + i, y - 15, x + i + 40, y - 40);
		line(x + i + 40, y - 15, x + i + 45, y - 10);
		line(x + i + 45, y - 10, x + i + 45, y);
		line(x + i + 40, y - 15, x + i + 37, y);

		/* head and hand of stick man */
		circle(x + i + 40, y - 45, 5);
		line(x + i + 40, y - 35, x + i + 50, y - 30);
		line(x + i + 40, y - 35, x + i + 35, y - 32);
		line(x + i + 35, y - 32, x + i + 45, y - 25);
		line(x + i + 60, y - 45, x + i + 27, y + 10);






	}


void car(int i){
	int wheel_radius = 10,
	arc_radius = 13,
	rim_radius = 2;

	int midy = (ScreenHeight / 2) + 15;


	//roof
	setcolor(BLUE);
	line(20+i,midy+5,80+i,midy);
	// //frontscreen
	line(80+i,midy,108+i,midy+28);
	 //bonet
	line(108+i,midy+28, 140+i,midy+28);
	line(140+i,midy+28,144+i,midy+33);


	 //front
	line(144+i,midy+33,144+i,midy+60);


	 //bottom
	line(0+i,midy+50,10+i,midy+60);
	line(10+i,midy+60,144+i,midy+60);
	// line(136+i,midy+60,144+i,midy+60);
	 //back
	line(0+i,midy+30,0+i,midy+50);

	 //rearscreen
	line(0+i,midy+30,20+i,midy+5);

	// setcolor(BLUE);

	//line beneath the roof
	line(22+i,midy+7,77+i,midy+5);

	//horizontal divider
	// setcolor(BLUE);
	line(2+i,midy+33,144+i,midy+33);




	//back door
	line(24+i,midy+30,24+i,midy+47);
	line(55+i,midy+6,55+i,midy+50);               //door divider


	// setcolor(BLUE);

	line(0+i,midy+50,17+i,midy+50);
	line(32+i,midy+50,114+i,midy+50);            //line under doors
	line(132+i,midy+50,144+i,midy+50);






	// //front door
	line(105+i,midy+28,105+i,midy+48);


	// //front window
	line(77+i,midy+5,100+i,midy+28);
	line(55+i,midy+28,100+i,midy+28);

	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(80+i,midy+13,BLUE);

	// setcolor(BLUE);

	// //back door window
	line(24+i,midy+28,55+i,midy+28);
	line(24+i,midy+28,30+i,midy+7);

	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(25+i,midy+27,BLUE);


	




	// //back window
	

	line(15+i,midy+28,25+i,midy+28);
	line(15+i,midy+28,22+i,midy+7);

	setfillstyle(INTERLEAVE_FILL, LIGHTBLUE);
	floodfill(20+i,midy+26,BLUE);


	//color
	setfillstyle(SOLID_FILL,LIGHTCYAN);
	floodfill(72+i,midy+35,BLUE);







	//wheels
	 //front
	arc(123+i,midy+60,0,180,arc_radius);

	 //back
	arc(23+i,midy+60,0,180,arc_radius);

	setcolor(BLACK);

                if (i % 2 == 0) {
                        setfillstyle(SLASH_FILL, WHITE);
                } else {
                        setfillstyle(BKSLASH_FILL, WHITE);
                }

                //front

	circle(123+i,midy+60,wheel_radius);
	circle(123+i,midy+60,rim_radius);


	
    //back
	circle(23+i,midy+60,wheel_radius);
	circle(23+i,midy+60,rim_radius);
	
	



}



void secondCar(int i){

	int midy;



	/* mid position in y-axis */
	midy = (ScreenHeight / 2) + 80;



		/* body of the car */
		setcolor(CYAN);
                setfillstyle(SOLID_FILL, MAGENTA);

                line(ScreenWidth + i, midy + 23, ScreenWidth + i, midy);
                line(ScreenWidth + i, midy, (ScreenWidth-20) + i, midy);
                line((ScreenWidth-20) + i, midy, (ScreenWidth-40) + i, midy - 20);
                line((ScreenWidth-40) + i, midy - 20, (ScreenWidth-80) + i, midy - 20);
                line((ScreenWidth-80) + i, midy - 20, (ScreenWidth-100) + i, midy);
                line((ScreenWidth-100) + i, midy, (ScreenWidth-120) + i, midy);
                line((ScreenWidth-120) + i, midy, (ScreenWidth-120) + i, midy + 23);
                line(ScreenWidth + i, midy + 23, (ScreenWidth-18) + i, midy + 23);
                arc((ScreenWidth-30) + i, midy + 23, 0, 180, 12);
                line((ScreenWidth-42) + i, midy + 23, (ScreenWidth-78) + i, midy + 23);
                arc((ScreenWidth-90) + i, midy + 23, 0, 180, 12);
                line((ScreenWidth-102) + i, midy + 23, (ScreenWidth-120) + i, midy + 23);

                line((ScreenWidth-28) + i, midy, (ScreenWidth-43) + i, midy - 15);
                line((ScreenWidth-43) + i, midy - 15, (ScreenWidth-57) + i, midy - 15);
                line((ScreenWidth-57) + i, midy - 15, (ScreenWidth-57) + i, midy);
                line((ScreenWidth-57) + i, midy, (ScreenWidth-28) + i, midy);

                line((ScreenWidth-62) + i, midy - 15, (ScreenWidth-77) + i, midy - 15);
                line((ScreenWidth-77) + i, midy - 15, (ScreenWidth-92) + i, midy);
                line((ScreenWidth-92) + i, midy, (ScreenWidth-62) + i, midy);
                line((ScreenWidth-62) + i, midy, (ScreenWidth-62) + i, midy - 15);
                floodfill((ScreenWidth-5) + i, midy + 22, CYAN);
                setcolor(DARKGRAY);

                /* draw wheels of the car */
                if (i % 2 == 0) {
                        setfillstyle(SLASH_FILL, WHITE);
                } else {
                        setfillstyle(BKSLASH_FILL, WHITE);
                }

                circle((ScreenWidth-30) + i, midy + 25, 9);
		circle((ScreenWidth-90) + i, midy + 25, 9);
                floodfill((ScreenWidth-30) + i, midy + 25, DARKGRAY);
                floodfill((ScreenWidth-90) + i, midy + 25, DARKGRAY);
               
        }


       


void truck(int i){
	 
        
        /* height of car*/
        int midy = (ScreenHeight / 2) + 45;
     

            
                /* draw the dump bed(backside) of truck */
                setcolor(MAGENTA);
                setfillstyle(SOLID_FILL, CYAN);
                line(0 + i, midy, 80 + i, midy);
                line(80 + i, midy, 80 + i, midy + 30);
                line(80 + i, midy + 30, 47 + i, midy + 30);
                line(0 + i, midy + 30, 23 + i, midy + 30);
                line(0 + i, midy + 30, 0 + i, midy);
                arc(35 + i, midy + 30, 0, 180, 12);
                floodfill(5 + i, midy + 5, MAGENTA);

                /* draw the cab of truck */
                setcolor(MAGENTA);
                setfillstyle(SOLID_FILL, CYAN);
                line(81 + i, midy + 30, 81 + i, midy - 40);
                line(82 + i, midy - 40, 111 + i, midy - 40);
                line(111 + i, midy - 40, 126 + i, midy - 10);
                line(126 + i, midy - 10, 126 + i, midy + 30);
                line(126 + i, midy + 30, 117 + i, midy + 30);
                line(93 + i, midy + 30, 81 + i, midy + 30);
                arc(105 + i, midy + 30, 0, 180, 12);

                /* window */
                line(87 + i, midy - 5, 118 + i, midy - 5);
                line(87 + i, midy - 5, 87 + i, midy - 30);
                line(87 + i, midy - 30, 106 + i, midy - 30);
                line(106 + i, midy - 30, 118 + i, midy - 5);
                floodfill(85 + i, midy + 25, MAGENTA);

                setcolor(BLACK);
                if (i % 2 == 0) {
                        setfillstyle(SLASH_FILL, WHITE);
                } else {
                        setfillstyle(BKSLASH_FILL, WHITE);
                }

                /* draw the tyres */
                circle(35 + i, midy + 30, 8);
                circle(105 + i, midy + 30, 8);
                floodfill(35 + i, midy + 30, BLACK);
                floodfill(105 + i, midy + 30, BLACK);

        }

       


void dam(){
	setcolor(WHITE);
	line(0,370,700,370);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(240,390,WHITE);
}

void main(){


int i,j,k;


	char t='t';                                //to be used for translation
    char s='s';                             //to be used for scaling
    int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");





	
	outtextxy(200,380,"Kudakwashe Kuzvindiwana N0162653E");


	

	//###################Clouds##############

	clouds();

	sun();
	mountain();


	//############### Trees ############

	//#################tree1##########
	drawTree(t,-200,10);

	//##################Tree2##########

	 drawTree(t,-170,10);


	//##################### Tree 3 ###########

	drawTree(t,-135,10);

	drawTree(t,310,-210);
	drawTree(t,340,-210);

	drawTree(t,370,-210);

	hut();

	house();

	dam();

	

	for(i=0;i<ScreenWidth;i++){

	
	//road
	road();




	pedestrian(20,ldisp);
	

	if(i>200){
		k = i-200;
       car(k);
	}

	truck(i);
	secondCar(i);

	
	boat(i);
	
	

}
	

	getch();
	closegraph();

}
