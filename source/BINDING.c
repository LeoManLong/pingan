#include"common.h"
#include"binding.h"

void binding(int *page)
{
	int num=0;
	char licensenum[7];		//6λ���ƺ���
	char caridnum[6];		//5λ���ܺ���
	char enginenum[6];		//5λ��������
	char year[5];       //ע�����
	char month[3];     //ע���·�
	char day[3];     //ע������
	int state1 = 0;					//�ж��Ƿ����ַ�����
	int state2 = 0;
	int state3 = 0;
	int state4 = 0;
	int state5 = 0;
	int state6 = 0;
	
	clrmous(MouseX, MouseY);
	delay(100);
	cleardevice();
	drawbinding();
	
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
		
		else if(mouse_press(180,400,260,430) == 2)		//��һ��
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				button(180,400,260,430,15,10,1);
				puthz(185,405,"��һ��",24,24,1);
				num = 2;
			}
			continue;
		}
		else if (mouse_press(180,400,260,430) == 1)
		{
			MouseS = 0;
			*page = 20;
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
		    *page = 0;
			return;
		}
		
		else if(mouse_press(275,120,480,160) == 2)		//���ƺ���
		{
			if (num == 0 && state1 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(275,120,480,160,8,15,1);
				num = 4;
			}
			continue;
		}
		else if (mouse_press(275,120,480,160) == 1)
		{
			MouseS = 0;
		    button(275,120,480,160,8,15,1);
			licensenum[0] = '\0';
			input(licensenum,280,122,11,15,2);
			if(strlen(licensenum) != 0)
				state1 = 1;
			else
				state1 = 0;
			continue;
		}
		
		else if(mouse_press(275,180,480,220) == 2)		//���ܺ���
		{
			if (num == 0 && state2 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(275,180,480,220,8,15,1);
				num = 5;
			}
			continue;
		}
		else if (mouse_press(275,180,480,220) == 1)
		{
			MouseS = 0;
		    button(275,180,480,220,8,15,1);
			caridnum[0] = '\0';
			input(caridnum,280,182,11,15,2);
			if(strlen(caridnum) != 0)
				state2 = 1;
			else
				state2 = 0;
			continue;
		}
		
		else if(mouse_press(275,240,480,280) == 2)		//��������
		{
			if (num == 0 && state3 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(275,240,480,280,8,15,1);
				num = 6;
			}
			continue;
		}
		else if (mouse_press(275,240,480,280) == 1)
		{
			MouseS = 0;
		    button(275,240,480,280,8,15,1);
			enginenum[0] = '\0';
			input(enginenum,280,242,11,15,2);
			if(strlen(enginenum) != 0)
				state3 = 1;
			else
				state3 = 0;
			continue;
		}
		
		else if(mouse_press(275,300,320,340) == 2)		//��
		{
			if (num == 0 && state4 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(275,300,320,340,8,15,1);
				num = 7;
			}
			continue;
		}
		else if (mouse_press(275,300,320,340) == 1)
		{
			MouseS = 0;
		    button(275,300,320,340,8,15,1);
			year[0] = '\0';
			input(year,280,302,11,15,2);
			if(strlen(year) != 0)
				state4 = 1;
			else
				state4 = 0;
			continue;
		}
		
		else if(mouse_press(360,300,380,340) == 2)		//��
		{
			if (num == 0 && state5 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(360,300,380,340,8,15,1);
				num = 7;
			}
			continue;
		}
		else if (mouse_press(360,300,380,340) == 1)
		{
			MouseS = 0;
		    button(360,300,380,340,8,15,1);
			month[0] = '\0';
			input(month,360,302,11,15,2);
			if(strlen(month) != 0)
				state5 = 1;
			else
				state5 = 0;
			continue;
		}
		
		else if(mouse_press(420,300,440,340) == 2)		//��
		{
			if (num == 0 && state6 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(420,300,440,340,8,15,1);
				num = 8;
			}
			continue;
		}
		else if (mouse_press(420,300,440,340) == 1)
		{
			MouseS = 0;
		    button(420,300,440,340,8,15,1);
			day[0] = '\0';
			input(day,360,302,11,15,2);
			if(strlen(day) != 0)
				state6 = 1;
			else
				state6 = 0;
			continue;
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
					puthz(185,405,"��һ��",24,24,1);
				}
				else if(num == 3)
				{
					setfillstyle(1,4);
					bar(380,400,460,430);
					puthz(395,405,"����",24,28,1);
				}
				
				else if(num == 4 && state1 == 0)
				{
					button(275,120,480,160,15,15,1);
				}
				else if(num == 5 && state2 == 0)
				{
					button(275,180,480,220,15,15,1);
				}
				else if(num == 6 && state3 == 0)
				{
					button(275,240,480,280,15,15,1);
				}
				else if(num == 7 && state4 == 0)
				{
					button(275,300,320,340,15,15,1);
				}
				else if(num == 8 && state5 == 0)
				{
					button(360,300,380,340,15,15,1);
				}
				else if(num == 9 && state6 == 0)
				{
					button(420,300,440,340,15,15,1);
				}
				num=0;
			}
			continue;
		}
	}
}

void drawbinding()
{	
	setbkcolor(LIGHTCYAN);
	
	puthz(220,20,"�󶨳���",48,56,1);
	puthz(20,100,"�������ʻ֤��д������Ϣ",16,18,4);
	setfillstyle(1,15);
	bar(275,120,480,160);
	puthz(160,130,"���ƺ���",24,28,8);
	puthz(280,130,"��",24,28,8);
	bar(275,180,480,220);
	puthz(160,190,"���ܺ���",24,28,8);
	bar(275,240,480,280);
	puthz(160,250,"��������",24,28,8);
	bar(275,300,480,340);
	puthz(160,310,"ע������",24,28,8);
	puthz(340,310,"��",24,28,8);
	puthz(400,310,"��",24,28,8);
	puthz(460,310,"��",24,28,8);
	
	setfillstyle(1,GREEN);
	bar(180,400,260,430);
	puthz(185,405,"��һ��",24,24,1);
	setfillstyle(1,4);
	bar(380,400,460,430);
	puthz(395,405,"����",24,28,1);
	
	setfillstyle(1,LIGHTGRAY);
    bar(610,0,640,30);
    setcolor(1);
    line(610,0,640,30);
    line(640,0,610,30);
}