#include"common.h"
#include"inspection.h"

void inspect(int *page, User *u)
{
	int num = 0;
	int carid = 0;		//showcar中第几辆车辆
	int state1 = 0;		//判断内容输入状态的参数
	int state2 = 0;
	int state3 = 0;
	int cost = 0;
	char charge[5];
	
	clrmous(MouseX, MouseY);
	delay(100);
	cleardevice();
	drawinspect(u,&carid);
	
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(610,0,640,30) == 2)		//退出
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
		
		else if(mouse_press(180,400,260,430) == 2)	//提交
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				button(180,400,260,430,15,10,1);
				puthz(195,405,"提交",24,28,1);
				num = 2;
			}
			continue;
		}
		else if (mouse_press(180,400,260,430) == 1)
		{
			MouseS = 0;
			if(state1 == 0 && state2 == 0 && state3 == 0)
				puthz(220,225,"请选择类型！",16,18,4);
			else
			{
				setfillstyle(1,LIGHTCYAN);
				bar(220,225,420,245);
			}
			if((state1 != 0 || state2 != 0 || state3 != 0) 
				&& (strlen(u->car[carid].licensenum)!= 0))
			{
				write_inspectingdata(u,carid,state1,state2,state3);
				puthz(280,435,"提交成功！",16,20,RED);
				delay(800);
				*page = 7;
				return;
			}
		}
		
		else if(mouse_press(380,400,460,430) == 2)	//返回
		{
			if (num == 0)
			{
				MouseS = 1;
				clrmous(MouseX, MouseY);
				delay(10);
				button(380,400,460,430,15,12,1);
				puthz(395,405,"返回",24,28,1);
				num = 3;
			}
			continue;
		}
		else if (mouse_press(380,400,460,430) == 1)
		{
			MouseS = 0;
		    *page = 7;
			return;
		}
		
		else if (mouse_press(520,135,600,155) == 2)	//切换车辆
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
		else if (mouse_press(520,135,600,155) == 1)
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
			bar(20,160,620,200);
			show_car(u,90,162,1,&carid);
		}
		
		else if (mouse_press(135,305,145,315) == 2)	//新车免检
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
		else if (mouse_press(135,305,145,315) == 1)
		{
			delay(150);
			choose(140,310,&state1);
			single(&state2,&state2,&state3,&state2,&state3,320,310,320,310,500,310,320,310,500,310);
		}
		
		else if (mouse_press(315,305,325,315) == 2)	//普通年检
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
		else if (mouse_press(315,305,325,315) == 1)
		{
			delay(150);
			choose(320,310,&state2);
			single(&state1,&state1,&state3,&state1,&state3,140,310,140,310,500,310,140,310,500,310);
		}
		
		else if (mouse_press(495,305,505,315) == 2)	//特快年检
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
		else if (mouse_press(495,305,505,315) == 1)
		{
			delay(150);
			choose(500,310,&state3);
			single(&state1,&state1,&state2,&state1,&state2,140,310,140,310,320,310,140,310,320,310);
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
					puthz(195,405,"提交",24,28,1);
				}
				else if(num == 3)
				{
					setfillstyle(1,4);
					bar(380,400,460,430);
					puthz(395,405,"返回",24,28,1);
				}
				num = 0;
			}
			continue;
		}
		if(state1 == 0 && state2 == 0 && state3 == 0)
		{
			setfillstyle(1,LIGHTCYAN);
			bar(320,350,390,380);
		}
		else
			price(&state1,&state2,&state3,&state1,&state2,&state3,0,500,800,0,0,0,cost,charge,320,350);
	}
}

void drawinspect(User* u, int *carid)
{
	setbkcolor(LIGHTCYAN);	
	puthz(220,20,"年检代办",48,56,1);
	puthz(20,120,"车辆信息",24,28,1);
	puthz(520,135,"切换车辆",16,18,8);
	setfillstyle(1,15);
	bar(20,160,620,200);
	fillellipse(140,310,5,5);
	fillellipse(320,310,5,5);
	fillellipse(500,310,5,5);
	setcolor(8);
	line(500,140,515,140);
	line(515,140,510,135);
	line(500,145,515,145);
	line(500,145,505,150);
	circle(140,310,5);
	circle(320,310,5);
	circle(500,310,5);
	
	puthz(20,220,"选择年检类型",24,28,1);
	setcolor(15);
	setlinestyle(0,4,3);
	rectangle(50,250,230,330);
	rectangle(230,250,410,330);
	rectangle(410,250,590,330);
	puthz(80,270,"新车免检",24,28,8);
	puthz(260,270,"普通年检",24,28,8);
	puthz(450,270,"特快年检",24,28,8);
	
	puthz(160,350,"共计消费：",24,28,1);
	puthz(400,355,"元",24,28,1);
	setfillstyle(1,GREEN);
	bar(180,400,260,430);
	setfillstyle(1,4);
	bar(380,400,460,430);
	puthz(195,405,"提交",24,28,1);
	puthz(395,405,"返回",24,28,1);
	
	setfillstyle(1,LIGHTGRAY);
    bar(610,0,640,30);
    setcolor(1);
    line(610,0,640,30);
    line(640,0,610,30);
	show_car(u,90,162,1,carid);		//输出车辆信息
}

void write_inspectingdata(User *u, int carid, int inspect1,int inspect2, int inspect3)
{
	FILE *fp;
	Parking *p;
	struct tm *local;
    time_t t;
	int i;
	int inspect = 0;
	char str[5];
	char inspecting_str_type[2];
	t=time(NULL);
    local=localtime(&t);
	
	if( (fp = fopen("Database\\InspData.dat", "rb+" )) == NULL )	//open InspData.dat in fp
	{
		closegraph();
		printf("Error! Can't Open \"InspData.dat\" File");
		delay(1500);
		exit(1);
	}
	
	if( (p = (Parking*)malloc(sizeof(Parking))) == NULL )	//allocate memory for p
	{
		printf("Error - unable to allocate required memory for inspect");
		delay(1500);
		exit(1);
	}
	
	if(inspect1 == 1)
	{
		inspect = 1;
	}
	else if(inspect2 == 1)
	{
		inspect = 2;
	}
	else if(inspect3 == 1)
	{
		inspect = 3;
	}
	inspecting_str_type[0] = '0' + inspect;
	inspecting_str_type[1] = '\0';
	
	strcpy(p->licensenum, u->car[carid].licensenum);		//copy u->car[carid]licensenum to p.licensenum
	strcpy(p->parkplace,inspecting_str_type);
	local=localtime(&t);
	itoa(local->tm_year + 1900, str, 10);
	strcpy(p->parkingdate.year,str);
	itoa(local->tm_mon + 1, str, 10);
	strcpy(p->parkingdate.month,str);
	itoa(local->tm_mday, str, 10);
	strcpy(p->parkingdate.day,str);
	
	fseek(fp,0,SEEK_END);			
	fwrite(p,sizeof(Parking),1,fp);	//write p to *fp->file
	
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
	
	if (fclose(fp) != 0)
	{
		printf("\n cannot close InspData.dat");
		delay(3000);
		exit(1);
	}
	
}
