#include"common.h"
#include"moreinfo.h"

void moreinfo(int *page)
{
	int num=0;
	char seatnum[5];		//��λ����
	int state1 = 0;
	int state2 = 0;
	int state3 = 0;
	int state4 = 0;
	int state5 = 0;
	int state6 = 0;
	
	clrmous(MouseX, MouseY);
	delay(100);
	cleardevice();
	drawmoreinfo();
	
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(610,0,640,30) == 2)		//�˳�
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
		
		else if(mouse_press(180,400,260,430) == 2)		//�ύ
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				button(180,400,260,430,15,10,1);
				puthz(195,405,"�ύ",24,24,1);
				num = 2;
			}
			continue;
		}
		else if (mouse_press(180,400,260,430) == 1)
		{
			MouseS = 0;
			if(state1 == 0 && state2 == 0 && state3 == 0 && state4 == 0)
				puthz(220,135,"��ѡ���ͺţ�",16,18,4);
			else
			{
				setfillstyle(1,LIGHTCYAN);
				bar(220,135,420,155);
			}
			if(state5 == 0 && state6 == 0)
				puthz(220,195,"��ѡ��ʹ�����ʣ�",16,18,4);
			else
			{
				setfillstyle(1,LIGHTCYAN);
				bar(220,195,420,215);
			}
			if((state1 != 0 || state2 != 0 || state3 != 0 || state4 != 0) && (state5 != 0 || state6 != 0))
			{
				setfillstyle(1,LIGHTCYAN);
				bar(220,135,420,155);
				bar(220,195,420,335);
				puthz(280,435,"�ύ�ɹ���",16,20,4);
				delay(800);
				*page = 8;
				return;
			}			
		}
		
		else if(mouse_press(380,400,460,430) == 2)		//����
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
		    *page = 19;
			return;
		}
		
		else if (mouse_press(185,135,195,145) == 2)   //����
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
		else if (mouse_press(185,135,195,145) == 1)
		{
			delay(150);
			choose(190,140,&state1);
			single(&state2,&state3,&state4,290,140,390,140,490,140);
		}
		
		else if (mouse_press(285,135,295,145) == 2)   //�µ�
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
		else if (mouse_press(285,135,295,145) == 1)
		{
			delay(150);
			choose(290,140,&state2);
			single(&state1,&state3,&state4,190,140,390,140,490,140);
		}
		
		else if (mouse_press(385,135,395,145) == 2)   //����
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
		else if (mouse_press(385,135,395,145) == 1)
		{
			delay(150);
			choose(390,140,&state3);
			single(&state1,&state2,&state4,190,140,290,140,490,140);
		}
		
		else if (mouse_press(485,135,495,145) == 2)   //����
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
		else if (mouse_press(485,135,495,145) == 1)
		{
			delay(150);
			choose(490,140,&state3);
			single(&state1,&state2,&state3,190,140,290,140,390,140);
		}
		
		else if (mouse_press(185,195,195,205) == 2)   //Ӫ��
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
		else if (mouse_press(185,195,195,205) == 1)
		{
			delay(150);
			choose(190,200,&state5);
			single(&state6,&state6,&state6,390,200,390,200,390,200);
		}
		
		else if (mouse_press(385,195,395,205) == 2)   //��Ӫ��
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
		else if (mouse_press(385,195,395,205) == 1)
		{
			delay(150);
			choose(390,200,&state6);
			single(&state5,&state5,&state5,190,200,190,200,190,200);
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
					puthz(195,405,"�ύ",24,24,1);
				}
				else if(num == 3)
				{
					setfillstyle(1,4);
					bar(380,400,460,430);
					puthz(395,405,"����",24,28,1);
				}
				
				num=0;
			}
			continue;
		}
	}
}

void drawmoreinfo()
{
	setbkcolor(LIGHTCYAN);
	puthz(220,20,"������Ϣ",48,56,1);
	setfillstyle(1,15);
	puthz(25,130,"Ʒ���ͺ�",24,28,8);
	fillellipse(190,140,5,5);
	fillellipse(290,140,5,5);
	fillellipse(390,140,5,5);
	fillellipse(490,140,5,5);
	fillellipse(190,200,5,5);
	fillellipse(390,200,5,5);
	setcolor(8);
	circle(190,140,5);
	circle(290,140,5);
	circle(390,140,5);
	circle(490,140,5);
	circle(190,200,5);
	circle(390,200,5);
	puthz(200,130,"����",24,28,8);
	puthz(300,130,"�µ�",24,28,8);
	puthz(400,130,"����",24,28,8);
	puthz(500,130,"����",24,28,8);
	puthz(25,190,"ʹ������",24,28,8);
	puthz(200,190,"Ӫ��",24,28,8);
	puthz(400,190,"��Ӫ��",24,28,8);
	puthz(25,250,"��λ����",24,28,8);
	bar(140,240,620,280);
	
	setfillstyle(1,GREEN);
	bar(180,400,260,430);
	setfillstyle(1,4);
	bar(380,400,460,430);
	puthz(195,405,"�ύ",24,28,1);
	puthz(395,405,"����",24,28,1);
	
	setlinestyle(0,4,3);
	setfillstyle(1,LIGHTGRAY);
    bar(610,0,640,30);
    setcolor(1);
    line(610,0,640,30);
    line(640,0,610,30);
}