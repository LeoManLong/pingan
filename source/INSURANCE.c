#include"common.h"

void insure()
{
	int gdriver=VGA;
    int gmode=VGAHI;
    initgraph(&gdriver,&gmode,"C:\\BORLANDC\\BGI");
	
	setbkcolor(LIGHTCYAN);
	
	puthz(240,20,"����",48,56,1);
	puthz(20,120,"������Ϣ",24,28,1);
	puthz(520,135,"�л�����",16,18,8);
	setcolor(8);
	line(500,140,515,140);
	line(515,140,510,135);
	line(500,145,515,145);
	line(500,145,505,150);
	setfillstyle(1,15);
	bar(20,160,620,200);
	setcolor(15);
	setlinestyle(0,4,3);
	rectangle(60,220,580,260);
	rectangle(60,260,580,300);
	rectangle(60,300,580,340);
	setcolor(8);
	puthz(80,230,"������",24,28,1);
	puthz(80,270,"��ҵ��",24,28,1);
	puthz(80,310,"��ǿ��",24,28,1);
	puthz(280,230,"����",24,28,1);
	puthz(280,270,"����",24,28,1);
	puthz(280,310,"����",24,28,1);
	settextstyle(1,0,1);
	outtextxy(360,230,"2.00");
	outtextxy(360,270,"1.00");
	outtextxy(360,310,"1.50");
	puthz(400,230,"��Ԫ",24,28,1);
	puthz(400,270,"��Ԫ",24,28,1);
	puthz(400,310,"��Ԫ",24,28,1);
	setlinestyle(0,4,3);
	circle(540,240,8);
	circle(540,280,8);
	circle(540,320,8);
	puthz(80,350,"�ܼ�",24,28,1);
	puthz(200,350,"��Ԫ",24,28,1);
	puthz(260,355,"���������ע��ƽ���ó��������ںţ�",16,18,8);
	
	setfillstyle(1,12);
	bar(180,400,260,430);
	setfillstyle(1,14);
	bar(380,400,460,430);
	puthz(195,405,"����",24,28,1);
	puthz(395,405,"����",24,28,1);
	
	setfillstyle(1,LIGHTGRAY);
    bar(610,0,640,30);
    setcolor(1);
    line(610,0,640,30);
    line(640,0,610,30);
}