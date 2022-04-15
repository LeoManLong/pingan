#include"common.h"
#include"violation.h"

void violate(int *page, User *u)
{
	int num = 0;
	int carid = 0;
	clrmous(MouseX, MouseY);
	delay(100);
	cleardevice();
	drawviolate(u,&carid);
	
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
		
		else if(mouse_press(180,400,260,430) == 2)   //��ѯ
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				button(180,400,260,430,15,10,1);
				puthz(195,405,"��ѯ",24,28,1);
				num = 2;
			}
			continue;
		}
		else if (mouse_press(180,400,260,430) == 1)
		{
			MouseS = 0;
			setfillstyle(1,LIGHTCYAN);
			bar(0,170,640,378);
			search_vio(u,carid);
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
				num = 3;
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
			show_car(u,90,122,1,&carid);
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
					puthz(195,405,"��ѯ",24,28,1);
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

void drawviolate(User *u, int *carid)
{
	setbkcolor(LIGHTCYAN);
	
	puthz(240,20,"��Υ��",48,56,1);
	puthz(20,80,"������Ϣ",24,28,1);
	puthz(520,95,"�л�����",16,18,8);
	setcolor(8);
	line(500,100,515,100);
	line(515,100,510,95);
	line(500,105,515,105);
	line(500,105,505,110);
	setfillstyle(1,15);
	bar(20,120,620,160);
	setlinestyle(0,4,3);
	
	setfillstyle(1,GREEN);
	bar(180,400,260,430);
	setfillstyle(1,4);
	bar(380,400,460,430);
	puthz(195,405,"��ѯ",24,28,1);
	puthz(395,405,"����",24,28,1);
	
	setfillstyle(1,LIGHTGRAY);
    bar(610,0,640,30);
    setcolor(1);
    line(610,0,640,30);
    line(640,0,610,30);
	show_car(u,90,122,1,&carid);
}

void search_vio(User *u, int carid)
{
	int i,j;
	int set_num;
	int max_num = 0;
	int violate_found = 0;
	FILE *fp;
	Vio *vi = NULL;
	
	if( (fp = fopen("Database\\VioData.dat", "rb+" )) == NULL )	//open VioData.dat in fp
	{
		closegraph();
		printf("Error! Can't Open \"VioData.dat\" File");
		delay(1500);
		exit(1);
	}
	
	fseek(fp, 0, SEEK_END);
	set_num = ftell(fp) / sizeof(Vio);
	button(20,170,800,377,11,11,1);
	for (i = 0; i < set_num; i++)
	{
		if( (vi = (Vio*)malloc(sizeof(Vio))) == NULL )	
		{
			closegraph();
			printf("Error - unable to allocate required memory in advio.c for in");
			delay(1500);
			exit(1);
		}
		
		fseek(fp, i * sizeof(Vio), SEEK_SET);
		fread(vi, sizeof(Vio), 1, fp);
		if (strcmp(u->car[carid].licensenum, vi->licensenum) == 0)
		{
			if(i != 0)	max_num = i;
		}
		free(vi);
	}
	if( (vi = (Vio*)malloc(sizeof(Vio))) == NULL )	
	{
		closegraph();
		printf("Error - unable to allocate required memory in advio.c for in");
		delay(1500);
		exit(1);
	}
	fseek(fp, max_num * sizeof(Vio), SEEK_SET);
	fread(vi, sizeof(Vio), 1, fp);
		
	setcolor(WHITE);
	setlinestyle(SOLID_LINE, 0, 3);
	settextstyle(1,0,2);
	
	if (strcmp(u->car[carid].licensenum, vi->licensenum) == 0)
	{
		puthz(140,180,"���ڣ�",24,28,1);
		setcolor(DARKGRAY);
		outtextxy(290,180,vi->viodate.year);
		puthz(350, 185 , "��", 16, 17, BLUE);
		outtextxy(375, 180 , vi->viodate.month);
		puthz(415, 185 , "��", 16, 17, BLUE);
		outtextxy(445, 180 , vi->viodate.day);
		puthz(480, 185 , "��", 16, 17, BLUE);
		puthz(140,230,"���ͣ�",24,28,1);
		switch(vi->viotype[0])
		{
			case '1':
				puthz(380,230,"����",24,28,1);
				violate_found = 1;
				break;
			case '2':
				puthz(380,230,"����",24,28,1);
				violate_found = 1;
				break;
			case '3':
				puthz(380,230,"�Ƽ�",24,28,1);
				violate_found = 1;
				break;
			case '4':
				puthz(380,230,"�����",24,28,1);
				violate_found = 1;
				break;
		}
		puthz(140,280,"������",24,28,1);
		puthz(240,280,"����",24,28,1);
		outtextxy(300,280,vi->viomoney);
		puthz(360,285,"Ԫ",16,18,1);
		puthz(420,280,"�۷�",24,28,1);
		outtextxy(490,280,vi->viopoint);
		puthz(540,285,"��",16,18,1);
	}
	free(vi);
	vi = NULL;
	
	if(violate_found == 0)
	{
		puthz(160,260, "�˳���û���κ�Υ�¼�¼", 24, 28, DARKGRAY);
	}
	
	if (vi != NULL)
	{
		free(vi);
		vi = NULL;
	}
	if (fclose(fp) != 0)
	{
		printf("\n cannot close VioData");
		delay(2000);
		exit(1);				
	}
}