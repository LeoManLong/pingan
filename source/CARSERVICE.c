#include"common.h"
#include"carservice.h"

void carserve()
{
	int gdriver=VGA;
    int gmode=VGAHI;
    initgraph(&gdriver,&gmode,"C:\\BORLANDC\\BGI");
	
	setbkcolor(LIGHTCYAN);
	
	puthz(220,20,"��������",48,56,1);
	puthz(20,120,"������Ϣ",24,28,1);
	puthz(520,135,"�л�����",16,18,8);
	setcolor(8);
	line(500,140,515,140);
	line(515,140,510,135);
	line(500,145,515,145);
	line(500,145,505,150);
	setfillstyle(1,15);
	bar(20,160,620,200);
	
	puthz(20,220,"ѡ�������Ŀ",24,28,1);
	setcolor(15);
	setlinestyle(0,4,3);
	rectangle(20,250,170,310);
	rectangle(170,250,320,310);
	rectangle(320,250,470,310);
	rectangle(470,250,620,310);
	puthz(70,260,"ϴ��",24,28,8);
	puthz(220,260,"����",24,28,8);
	puthz(370,260,"����",24,28,8);
	puthz(520,260,"Ų��",24,28,8);
	fillellipse(100,295,5,5);
	fillellipse(250,295,5,5);
	fillellipse(400,295,5,5);
	fillellipse(550,295,5,5);
	
	puthz(160,330,"�������ѣ�",24,28,1);
	puthz(400,335,"Ԫ",16,18,8);
	setfillstyle(1,12);
	bar(180,400,260,430);
	setfillstyle(1,14);
	bar(380,400,460,430);
	puthz(195,405,"ȷ��",24,28,1);
	puthz(395,405,"����",24,28,1);
	
	setfillstyle(1,LIGHTGRAY);
    bar(610,0,640,30);
    setcolor(1);
    line(610,0,640,30);
    line(640,0,610,30);
}