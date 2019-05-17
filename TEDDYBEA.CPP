#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void draw(int y){
  setfillstyle(SOLID_FILL,LIGHTMAGENTA);
  circle(200,100+y,50);               //Face
  floodfill(201,101+y,WHITE);
  setfillstyle(SOLID_FILL,LIGHTGRAY);
  circle(200,125+y,25);               //Mouth
  floodfill(201,126+y,WHITE);
  setfillstyle(SOLID_FILL,BLACK);
  ellipse(185,89+y,0,360,10,15);      //Left eye
  ellipse(215,89+y,0,360,10,15);      //Right eye
  ellipse(200,116+y,0,360,10,5);      //Nose
  floodfill(186,90+y,WHITE);
  floodfill(216,90+y,WHITE);
  floodfill(201,117+y,WHITE);
  line(200,121+y,200,135+y);
  arc(200,115+y,225,320,20);          //Smile
  setfillstyle(SOLID_FILL,LIGHTMAGENTA);
  arc(150,60+y,4,280,20);             //Left ear
  arc(250,60+y,-108,180,20);          //Right ear
  floodfill(151,61+y,WHITE);
  floodfill(251,61+y,WHITE);
  setfillstyle(SOLID_FILL,BLUE);
  line(232,137+y,240,153+y);          //Right side of bow
  arc(225,153+y,176,360,15);
  line(190,150+y,190,160+y);          //Center of bow
  line(210,150+y,210,160+y);
  line(190,160+y,210,160+y);
  line(169,137+y,160,153+y);	      //Left side of bow
  arc(175,155+y,176,360,15);
  floodfill(233,140+y,WHITE);
  floodfill(191,151+y,WHITE);
  floodfill(170,156+y,WHITE);
  setfillstyle(SOLID_FILL,LIGHTMAGENTA);
  arc(200,200+y,135,45,50);           //Stomach
  floodfill(201,201+y,WHITE);
  arc(136,164+y,38,222,40);           //Left hand
  arc(142,172+y,0,218,15);
  arc(110,172+y,253,340,20);
  floodfill(111,173+y,WHITE);
  arc(264,165+y,320,140,40);          //Right hand
  arc(260,172+y,335,195,15);
  arc(290,172+y,200,280,20);
  floodfill(270,140+y,WHITE);
  line(170,240+y,130,260+y);          //Left leg
  line(195,250+y,160,290+y);
  ellipse(155,260+y,180,280,25,30);
  floodfill(175,250+y,WHITE);
  line(230,240+y,270,260+y);          //Right leg
  line(205,250+y,240,290+y);
  ellipse(245,260+y,250,0,25,30);
  floodfill(235,250+y,WHITE);
  delay(10);
}

void main(){
  int gd,gm,y=150,n=2;
  gd=DETECT;
  initgraph(&gd,&gm,"\\TURBOC3\\BGI");
  setcolor(WHITE);
  draw(150);
  outtextxy(400,200,"Let's jump.");
  for(int i=0; i<n; i++){
  delay(3000);
  while(y<=150&&y>0){
    outtextxy(400,200,"Hurray!");
    draw(y);
    --y;
    cleardevice();
  }
  delay(50);
  while(y>=0&&y<150){
    outtextxy(400,200,"This is fun.");
    draw(y);
    ++y;
    cleardevice();
  }
  delay(60);
  y=150;
  if(i!=n-1){
    draw(150);
    outtextxy(400,200,"Let's jump again.");
  }
  }
  closegraph();
  restorecrtmode();
}