#include<string.h>
#include<graphics.h>
#include<math.h>
#include<bios.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include"HZ.H"
#include"mouse.h"
//#include"mouse.h"

void a_info()
{
	int gdriver=VGA;
    int gmode=VGAHI;
    initgraph(&gdriver,&gmode,"C:\\BORLANDC\\BGI");
	
	setbkcolor(LIGHTCYAN);
	setlinestyle(0,4,3);
	
	puthz(150,20,"�û���Ϣ����",48,56,1);
	puthz(150,80,"���복��",24,28,1);
	bar(150,110,420,150);
	puthz(160,120,"��",24,28,1);
	setfillstyle(1,7);
	bar(440,117,490,143);
	puthz(450,122,"��ѯ",16,18,1);
	
	puthz(80,160,"Υ�²�ѯ",24,28,1);
	rectangle(80,190,240,230);
	rectangle(240,190,400,230);
	rectangle(400,190,560,230);
	puthz(130,200,"����",24,28,1);
	puthz(270,200,"Υ������",24,28,1);
	puthz(450,200,"����",24,28,1);
	
	puthz(80,320,"������ѯ",24,28,1);
	rectangle(80,350,560,430);
	puthz(90,360,"���",24,28,1);
	puthz(260,360,"��Ԫ",24,28,1);
	puthz(90,400,"����������",24,28,1);
	puthz(300,400,"��",24,28,1);
	puthz(360,400,"��",24,28,1);
	puthz(430,400,"��",24,28,1);
	
	setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
	bar(625,0,640,15);
    setcolor(1);
    line(625,0,640,15);
    line(640,0,625,15);
	
	getch();
    cleardevice();
}