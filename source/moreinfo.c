#include"common.h"
#include"moreinfo.h"

void moreinfo(int *page)
{
	int num=0;
	char seatnum[5];		//��λ����
	int state1 = 0;					//�ж��Ƿ����ַ�����
	int state2 = 0;
	int state3 = 0;
	
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
			/**page = 20;*/
			return;
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
	puthz(200,130,"�µ�",24,28,8);
	//fillellipse(290,140,5,5);
	puthz(300,130,"����",24,28,8);
	//fillellipse(390,140,5,5);
	puthz(400,130,"����",24,28,8);
	//fillellipse(490,140,5,5);
	puthz(500,130,"���ǵ�",24,28,8);
	puthz(25,190,"ʹ������",24,28,8);
	//fillellipse(190,200,5,5);
	puthz(200,190,"Ӫ��",24,28,8);
	//fillellipse(390,200,5,5);
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