#include"common.h"

void parking()
{
	int gdriver=VGA;
    int gmode=VGAHI;
    initgraph(&gdriver,&gmode,"C:\\BORLANDC\\BGI");
	
	setbkcolor(LIGHTCYAN);
	
	puthz(200,20,"ͣ�����ɷ�",48,56,1);
	puthz(20,90,"������Ϣ",24,28,1);
	puthz(520,95,"�л�����",16,18,8);
	setcolor(8);
	line(500,100,515,100);
	line(515,100,510,95);
	line(500,105,515,105);
	line(500,105,505,110);
	setfillstyle(1,15);
	bar(20,120,620,160);
	puthz(20,180,"ԤԼͣ��",24,28,1);
	puthz(140,185,"����������Ч��",16,18,1);
	setcolor(15);
	setlinestyle(0,4,3);
	rectangle(80,210,240,290);
	rectangle(240,210,400,290);
	rectangle(400,210,560,290);
	puthz(90,220,"����",24,28,1);
	puthz(250,220,"����",24,28,1);
	puthz(410,220,"��У",24,28,1);
	puthz(110,260,"�人��ӻ���",16,18,8);
	puthz(275,260,"�人��վ",16,18,8);
	puthz(430,260,"���пƼ���ѧ",16,18,8);
	
	puthz(20,310,"��ͣ����",24,28,1);
	rectangle(80,340,240,380);
	rectangle(240,340,400,380);
	rectangle(400,340,560,380);
	setfillstyle(1,7);
	bar(570,350,610,370);
	puthz(575,352,"�ɷ�",16,18,1);
	
	setfillstyle(1,14);
	bar(280,420,360,450);
	puthz(295,425,"����",24,28,1);
	
	setfillstyle(1,LIGHTGRAY);
    bar(610,0,640,30);
    setcolor(1);
    line(610,0,640,30);
    line(640,0,610,30);
}