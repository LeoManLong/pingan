#include"common.h"
#include"claim.h"

void claim(int *page,User *u)
{
	int num = 0;
	int carid = 0;
	int state1 = 0;
	int state2 = 0;
	int state3 = 0;
	int state4 = 0;
	int state5 = 0;
	int state6 = 0;
	int state7 = 0;
	int state8 = 0;
	int state9 = 0;
	int state10 = 0;
	
	clrmous(MouseX, MouseY);
	delay(100);
	cleardevice();
	drawclaim(u,&carid);
	
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(610,0,640,30) == 2)   //�˳�
		{
			if (num == 0)
		    {
			    MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				setfillstyle(1,RED);
				bar(610,0,640,30);
			    setcolor(15);
				setlinestyle(0,4,3);
			    line(610,0,640,30);
				line(640,0,610,30);
			    num = 1;
		    }
			continue;
		}
		else if(mouse_press(610,0,640,30) == 1)
		{
			*page = 1;
			return;
		}
		
		else if(mouse_press(180,400,260,430) == 2)   //�ύ
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				button(180,400,260,430,15,10,1);
				puthz(195,405,"�ύ",24,28,1);
				num = 2;
			}
			continue;
		}
		else if (mouse_press(180,400,260,430) == 1)
		{
			MouseS = 0;
			if(state1 == 0 && state2 == 0 && state3 == 0 && state4 == 0 && state5 == 0 && state6 == 0)
				puthz(220,185,"��ѡ�񳡾���",16,18,4);
			else
			{
				setfillstyle(1,LIGHTCYAN);
				bar(220,185,420,205);
			}
			if(state7 == 0 && state8 == 0 && state9 == 0 && state10 == 0)
				puthz(220,315,"��ѡ���ɫ��",16,18,4);
			else
			{
				setfillstyle(1,LIGHTCYAN);
				bar(220,315,420,335);
			}
			if((state1 != 0 || state2 != 0 || state3 != 0 || state4 != 0 || state5 != 0 || state6 != 0) && (state7 != 0 || state8 != 0 || state9 != 0 || state10 != 0))
			{
				puthz(240,435,"���ύ����Ա���",16,20,4);
				delay(800);
				*page = 6;
				return;
			}
		}
		
		else if(mouse_press(380,400,460,430) == 2)   //����
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				button(380,400,460,430,15,12,1);
				puthz(395,405,"����",24,28,1);
				num = 3;
			}
			continue;
		}
		else if (mouse_press(380,400,460,430) == 1)
		{
			MouseS = 0;
		    *page = 6;
			return;
		}
		
		else if (mouse_press(520,95,600,115) == 2)   //�л�����
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				num = 4;
			}
			continue;
		}
		else if (mouse_press(520,95,600,115) == 1)
		{
			delay(130);
			if(carid < 2)
			{
				carid += 1;
			}
			else
			{
				carid = 0;
			}
			setfillstyle(1,15);
			bar(20,120,620,160);
			show_car(u,78,122,1,&carid);
		}
		
		else if (mouse_press(175,225,185,235) == 2)   //�Լ��в���
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				num = 5;
			}
			continue;
		}
		else if (mouse_press(175,225,185,235) == 1)
		{
			delay(150);
			choose(180,230,&state1);
			single(&state2,&state3,&state4,&state5,&state6,380,230,580,230,180,270,380,270,600,270);
		}
		
		else if (mouse_press(375,225,385,235) == 2)   //ײ�˱��˳�
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				num = 6;
			}
			continue;
		}
		else if (mouse_press(375,225,385,235) == 1)
		{
			delay(150);
			choose(380,230,&state2);
			single(&state1,&state3,&state4,&state5,&state6,180,230,580,230,180,270,380,270,600,270);
		}
		
		else if (mouse_press(575,225,585,235) == 2)   //����������
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				num = 7;
			}
			continue;
		}
		else if (mouse_press(575,225,585,235) == 1)
		{
			delay(150);
			choose(580,230,&state3);
			single(&state1,&state2,&state4,&state5,&state6,180,230,380,230,180,270,380,270,600,270);
		}
		
		else if (mouse_press(175,265,185,275) == 2)   //����Ʒ��ʧ
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				num = 8;
			}
			continue;
		}
		else if (mouse_press(175,265,185,275) == 1)
		{
			delay(150);
			choose(180,270,&state4);
			single(&state1,&state2,&state3,&state5,&state6,180,230,380,230,580,230,380,270,600,270);
		}
		
		else if (mouse_press(375,265,385,275) == 2)   //��ͣ������
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				num = 9;
			}
			continue;
		}
		else if (mouse_press(375,265,385,275) == 1)
		{
			delay(150);
			choose(380,270,&state5);
			single(&state1,&state2,&state3,&state4,&state6,180,230,380,230,580,230,180,270,600,270);
		}
		
		else if (mouse_press(595,265,605,275) == 2)   //���ݷ����¹�
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				num = 10;
			}
			continue;
		}
		else if (mouse_press(595,265,605,275) == 1)
		{
			delay(150);
			choose(600,270,&state6);
			single(&state1,&state2,&state3,&state4,&state5,180,230,380,230,580,230,180,270,380,270);
		}
		
		else if (mouse_press(115,355,125,365) == 2)   //����
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				num = 11;
			}
			continue;
		}
		else if (mouse_press(115,355,125,365) == 1)
		{
			delay(150);
			choose(120,360,&state7);
			single(&state8,&state9,&state10,&state9,&state10,270,360,420,360,540,360,420,360,540,360);
		}
		
		else if (mouse_press(265,355,275,365) == 2)   //����
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				num = 12;
			}
			continue;
		}
		else if (mouse_press(265,355,275,365) == 1)
		{
			delay(150);
			choose(270,360,&state8);
			single(&state7,&state9,&state10,&state9,&state10,120,360,420,360,540,360,420,360,540,360);
		}
		
		else if (mouse_press(415,355,425,365) == 2)   //����
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				num = 13;
			}
			continue;
		}
		else if (mouse_press(415,355,425,365) == 1)
		{
			delay(150);
			choose(420,360,&state9);
			single(&state7,&state8,&state10,&state8,&state10,120,360,270,360,540,360,270,360,540,360);
		}
		
		else if (mouse_press(535,355,545,365) == 2)   //����
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				num = 14;
			}
			continue;
		}
		else if (mouse_press(535,355,545,365) == 1)
		{
			delay(150);
			choose(540,360,&state10);
			single(&state7,&state8,&state9,&state8,&state9,120,360,270,360,420,360,270,360,420,360);
		}
		
		else
		{
			if(num != 0)
			{
				MouseS = 0;
				clrmous(MouseX, MouseY);
				delay(10);
				if(num == 1)
				{
					setfillstyle(1,LIGHTGRAY);
					bar(610,0,640,30);
					setcolor(1);
					setlinestyle(0,4,3);
					line(610,0,640,30);
					line(640,0,610,30);
				}
				else if(num == 2)
				{
					setfillstyle(1,2);
					bar(180,400,260,430);
					puthz(195,405,"�ύ",24,28,1);
				}
				else if(num == 3)
				{
					setfillstyle(1,4);
					bar(380,400,460,430);
					puthz(395,405,"����",24,28,1);
				}
				num = 0;
			}
			continue;
		}
	}
}

void drawclaim(User *u, int *carid)
{
	setbkcolor(LIGHTCYAN);
	
	puthz(240,20,"������",48,56,1);
	puthz(20,90,"������Ϣ",24,28,1);
	puthz(520,95,"�л�����",16,18,8);
	setcolor(8);
	line(500,100,515,100);
	line(515,100,510,95);
	line(500,105,515,105);
	line(500,105,505,110);
	setfillstyle(1,15);
	bar(20,120,620,160);
	fillellipse(180,230,5,5);
	fillellipse(380,230,5,5);
	fillellipse(580,230,5,5);
	fillellipse(180,270,5,5);
	fillellipse(380,270,5,5);
	fillellipse(600,270,5,5);
	circle(180,230,5);
	circle(380,230,5);
	circle(580,230,5);
	circle(180,270,5);
	circle(380,270,5);
	circle(600,270,5);
	fillellipse(120,360,5,5);
	fillellipse(270,360,5,5);
	fillellipse(420,360,5,5);
	fillellipse(540,360,5,5);
	circle(120,360,5);
	circle(270,360,5);
	circle(420,360,5);
	circle(540,360,5);
	
	puthz(20,180,"����ѡ��",24,28,1);
	setcolor(15);
	setlinestyle(0,4,3);
	rectangle(20,210,620,290);
	puthz(30,220,"�Լ��в���",24,28,8);
	puthz(230,220,"ײ�˱��˳�",24,28,8);
	puthz(430,220,"����������",24,28,8);
	puthz(30,260,"����Ʒ��ʧ",24,28,8);
	puthz(230,260,"��ͣ������",24,28,8);
	puthz(430,260,"���ݷ����¹�",24,28,8);
	
	puthz(20,310,"��ɫѡ��",24,28,1);
	rectangle(20,340,620,380);
	puthz(30,350,"����",24,28,8);
	puthz(180,350,"����",24,28,8);
	puthz(330,350,"����",24,28,8);
	puthz(480,350,"����",24,28,8);
	
	setfillstyle(1,GREEN);
	bar(180,400,260,430);
	setfillstyle(1,4);
	bar(380,400,460,430);
	puthz(195,405,"�ύ",24,28,1);
	puthz(395,405,"����",24,28,1);
	
    setfillstyle(1,LIGHTGRAY);
    bar(610,0,640,30);
    setcolor(1);
    line(610,0,640,30);
    line(640,0,610,30);
	
	show_car(u,78,122,1,carid);
}