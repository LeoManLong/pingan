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
			if(state1 == 0)
				puthz(485,135,"����д���ƺ��룡",16,18,4);
			else
			{
				setfillstyle(1,LIGHTCYAN);
				bar(485,135,640,165);
			}
			if(state2 == 0)
				puthz(485,195,"����д���ܺ��룡",16,18,4);
			else
			{
				setfillstyle(1,LIGHTCYAN);
				bar(485,195,640,225);
			}
			if(state3 == 0)
				puthz(485,255,"����д�������ţ�",16,18,4);
			else
			{
				setfillstyle(1,LIGHTCYAN);
				bar(485,255,640,285);
			}
			if(state4 == 0 || state5 == 0 || state6 == 0)
				puthz(505,315,"����д���ڣ�",16,18,4);
			else
			{
				setfillstyle(1,LIGHTCYAN);
				bar(505,315,640,345);
			}
			if(state1 != 0 && state2 != 0 && state3 != 0 && state4 != 0 && state5 != 0 && state6 != 0)
			{
				*page = 20;
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
		    *page = 8;
			return;
		}
		
		else if(mouse_press(310,120,480,160) == 2)		//���ƺ���
		{
			if (num == 0 && state1 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(310,120,480,160,8,15,1);
				num = 4;
			}
			continue;
		}
		else if (mouse_press(310,120,480,160) == 1)
		{
			MouseS = 0;
		    button(310,120,480,160,8,15,1);
			licensenum[0] = '\0';
			input(licensenum,310,125,6,15,2);
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
			input(caridnum,280,185,5,15,2);
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
			input(enginenum,280,245,5,15,2);
			if(strlen(enginenum) != 0)
				state3 = 1;
			else
				state3 = 0;
			continue;
		}
		
		else if(mouse_press(255,300,340,340) == 2)		//��
		{
			if (num == 0 && state4 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(255,300,340,340,8,15,1);
				num = 7;
			}
			continue;
		}
		else if (mouse_press(255,300,340,340) == 1)
		{
			MouseS = 0;
		    button(255,300,340,340,8,15,1);
			year[0] = '\0';
			input(year,255,305,4,15,2);
			if(strlen(year) != 0)
				state4 = 1;
			else
				state4 = 0;
			continue;
		}
		
		else if(mouse_press(360,300,410,340) == 2)		//��
		{
			if (num == 0 && state5 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(360,300,410,340,8,15,1);
				num = 8;
			}
			continue;
		}
		else if (mouse_press(360,300,410,340) == 1)
		{
			MouseS = 0;
		    button(360,300,410,340,8,15,1);
			month[0] = '\0';
			input(month,360,305,2,15,2);
			if(strlen(month) != 0)
				state5 = 1;
			else
				state5 = 0;
			continue;
		}
		
		else if(mouse_press(430,300,480,340) == 2)		//��
		{
			if (num == 0 && state6 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(430,300,480,340,8,15,1);
				num = 9;
			}
			continue;
		}
		else if (mouse_press(430,300,480,340) == 1)
		{
			MouseS = 0;
		    button(430,300,480,340,8,15,1);
			day[0] = '\0';
			input(day,430,305,2,15,2);
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
					button(310,120,480,160,15,15,1);
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
					button(255,300,340,340,15,15,1);
				}
				else if(num == 8 && state5 == 0)
				{
					button(360,300,410,340,15,15,1);
				}
				else if(num == 9 && state6 == 0)
				{
					button(430,300,480,340,15,15,1);
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
	puthz(140,100,"�������ʻ֤��д������Ϣ",16,18,4);
	setfillstyle(1,15);
	bar(275,120,480,160);
	puthz(160,130,"���ƺ���",24,28,8);
	puthz(280,130,"��",24,28,8);
	bar(275,180,480,220);
	puthz(160,190,"���ܺ���",24,28,8);
	bar(275,240,480,280);
	puthz(160,250,"��������",24,28,8);
	bar(255,300,500,340);
	puthz(140,310,"ע������",24,28,8);
	puthz(340,310,"��",24,28,8);
	puthz(410,310,"��",24,28,8);
	puthz(480,310,"��",24,28,8);
	
	setfillstyle(1,GREEN);
	bar(180,400,260,430);
	puthz(185,405,"��һ��",24,24,1);
	setfillstyle(1,4);
	bar(380,400,460,430);
	puthz(395,405,"����",24,28,1);
	
	setlinestyle(0,4,3);
	setfillstyle(1,LIGHTGRAY);
    bar(610,0,640,30);
    setcolor(1);
    line(610,0,640,30);
    line(640,0,610,30);
}



void write_cardata(char* licensenum, char* caridnum, char* enginenum, char* year, char* month, char* day)
{
	FILE *fp ;
	Car *c = NULL;
	
	if( (fp = fopen("Database\\CarData.dat", "rb+" )) == NULL )	//open cardata.dat in fp
	{
		printf("Error! Can't Open \"CarData.dat\" File");
		delay(1500);
		exit(1);
	}
	
	if( (c = (Car*)malloc(sizeof(Car))) == NULL )	//allocate memory for c
	{
		printf("Error - unable to allocate required memory");
		delay(1500);
		exit(1);
	}
	
	memset(c,'\0',sizeof(Car));
	
	stpcpy(c->licensenum,licensenum);			//copy licensenum to C.licensenum
	stpcpy(c->caridnum,caridnum); 
	stpcpy(c->enginenum,enginenum);
	stpcpy(c->regdate.year,year);
	stpcpy(c->regdate.month,month);
	stpcpy(c->regdate.day,day);
	fseek(fp,0,SEEK_END);
	fwrite(c,sizeof(Car),1,fp);	//write c to *fp->file
	
	if (c != NULL)
	{
		free(c);
		c = NULL;
	}
	
	if (fclose(fp) != 0)
	{
		printf("\n cannot close CarData.dat");
		delay(3000);
		exit(1);
	}
	
}