#include"common.h"
#include"binding.h"

void binding(int *page,User* u, int *usernum, int *carnum)
{
	int num=0;
	char licensenum[7] = { '\0' };	//6λ���ƺ���
	char year[5] = { '\0' };			//ע�����
	char month[3] = { '\0' };			//ע���·�
	char day[3] = { '\0' };			//ע������
	int type = 0;
	int nature = 0;
	int state1 = 0;			//�ж��Ƿ����ַ�����
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
			if(check_legal_addcar(licensenum,year,month,day,type,nature,usernum,carnum))
			{					
				output_userinfo(u,usernum,carnum);
				delay(1000);
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
		else if(mouse_press(255,180,340,220) == 2)		//��
		{
			if (num == 0 && state2 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(255,180,340,220,8,15,1);
				num = 5;
			}
			continue;
		}
		else if (mouse_press(255,180,340,220) == 1)
		{
			MouseS = 0;
		    button(255,180,340,220,8,15,1);
			year[0] = '\0';
			input(year,255,185,4,15,2);
			if(strlen(year) != 0)
				state2 = 1;
			else
				state2 = 0;
			continue;
		}
		
		else if(mouse_press(360,180,410,220) == 2)		//��
		{
			if (num == 0 && state3 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(360,180,410,220,8,15,1);
				num = 6;
			}
			continue;
		}
		else if (mouse_press(360,180,410,220) == 1)
		{
			MouseS = 0;
		    button(360,180,410,220,8,15,1);
			month[0] = '\0';
			input(month,360,185,2,15,2);
			if(strlen(month) != 0)
				state3 = 1;
			else
				state3 = 0;
			continue;
		}
		
		else if(mouse_press(430,180,480,220) == 2)		//��
		{
			if (num == 0 && state4 == 0)
			{
				MouseS = 2;
				clrmous(MouseX, MouseY);
				delay(10);
				button(430,180,480,220,8,15,1);
				num = 7;
			}
			continue;
		}
		else if (mouse_press(430,180,480,220) == 1)
		{
			MouseS = 0;
		    button(430,180,480,220,8,15,1);
			day[0] = '\0';
			input(day,430,185,2,15,2);
			if(strlen(day) != 0)
				state4 = 1;
			else
				state4 = 0;
			continue;
		}
		
		else if (mouse_press(185,255,195,265) == 2)   //����
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
		else if (mouse_press(185,255,195,265) == 1)
		{
			delay(150);
			choose(190,260,&state5);
			single(&state6,&state7,&state8,290,260,390,260,490,260);
			type = 1;
		}
		
		else if (mouse_press(285,255,295,265) == 2)   //�µ�
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
		else if (mouse_press(285,255,295,265) == 1)
		{
			delay(150);
			choose(290,260,&state6);
			single(&state5,&state7,&state8,190,260,390,260,490,260);
			type = 2;
		}
		
		else if (mouse_press(385,255,395,265) == 2)   //����
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
		else if (mouse_press(385,255,395,265) == 1)
		{
			delay(150);
			choose(390,260,&state7);
			single(&state5,&state6,&state8,190,260,290,260,490,260);
			type = 3;
		}
		
		else if (mouse_press(485,255,495,265) == 2)   //����
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
		else if (mouse_press(485,255,495,265) == 1)
		{
			delay(150);
			choose(490,260,&state8);
			single(&state5,&state6,&state7,190,260,290,260,390,260);
			type = 4;
		}
		
		else if (mouse_press(185,315,195,325) == 2)   //Ӫ��
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
		else if (mouse_press(185,315,195,325) == 1)
		{
			delay(150);
			choose(190,320,&state9);
			single(&state10,&state10,&state10,390,320,390,320,390,320);
			nature = 1;
		}
		
		else if (mouse_press(385,315,395,325) == 2)   //��Ӫ��
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
		else if (mouse_press(385,315,395,325) == 1)
		{
			delay(150);
			choose(390,320,&state10);
			single(&state9,&state9,&state9,190,320,190,320,190,320);
			nature = 2;
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
				
				else if(num == 4 && state1 == 0)
				{
					button(310,120,480,160,15,15,1);
				}
				
				else if(num == 5 && state2 == 0)
				{
					button(255,180,340,220,15,15,1);
				}
				else if(num == 6 && state3 == 0)
				{
					button(360,180,410,220,15,15,1);
				}
				else if(num == 7 && state4 == 0)
				{
					button(430,180,480,220,15,15,1);
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
	
	puthz(218,20,"�󶨳���",48,56,1); //220
	setfillstyle(1,15);
	bar(275,120,480,160);
	puthz(160,130,"���ƺ���",24,28,8);
	puthz(280,130,"��",24,28,8);
	puthz(60,250,"Ʒ���ͺ�",24,28,8);
	fillellipse(190,260,5,5);
	fillellipse(290,260,5,5);
	fillellipse(390,260,5,5);
	fillellipse(490,260,5,5);
	fillellipse(190,320,5,5);
	fillellipse(390,320,5,5);
	setcolor(8);
	circle(190,260,5);
	circle(290,260,5);
	circle(390,260,5);
	circle(490,260,5);
	circle(190,320,5);
	circle(390,320,5);
	puthz(200,250,"����",24,28,8);
	puthz(300,250,"�µ�",24,28,8);
	puthz(400,250,"����",24,28,8);
	puthz(500,250,"����",24,28,8);
	puthz(60,310,"ʹ������",24,28,8);
	puthz(200,310,"Ӫ��",24,28,8);
	puthz(400,310,"��Ӫ��",24,28,8);
	bar(255,180,500,220);
	puthz(140,190,"ע������",24,28,8);
	puthz(340,190,"��",24,28,8);
	puthz(410,190,"��",24,28,8);
	puthz(480,190,"��",24,28,8);
		
	setfillstyle(1,GREEN);
	bar(180,400,260,430);
	puthz(195,405,"�ύ",24,24,1);
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

int check_samecar(char* new_car) 
{
	int i,j;
	int set_num;
	FILE* fp;
	User * u = NULL;
	
	if( (fp = fopen("Database\\UserData.dat", "rb+" )) == NULL )	//open Userdata.dat in fp
	{
		printf("Error! Can't Open \"UserData.dat\" File");
		delay(1500);
		exit(1);
	}
	
	fseek(fp, 0, SEEK_END);
	set_num = ftell(fp) / sizeof(User);
	
	for (i = 0; i < set_num; i++)
	{
		if( (u = (User*)malloc(sizeof(User))) == NULL )	//allocate memory for u
		{
			printf("Error - unable to allocate required memory");
			delay(1500);
			exit(1);
		}
		
		fseek(fp, i * sizeof(User), SEEK_SET);
		fread(u, sizeof(User), 1, fp);
		
		
		if (strcmp(u->car[0].licensenum, new_car) == 0 || strcmp(u->car[1].licensenum, new_car) == 0 || 
			strcmp(u->car[2].licensenum, new_car) == 0 )
		{
			puthz(525,130, "���ƺ��Ѵ���", 16, 17, RED);
			if (u != NULL)
			{
				free(u);
				u = NULL;
			}
			if (fclose(fp) != 0)
			{
				printf("\n cannot close Database.");
				delay(3000);
				exit(1);
			}
			return 1;
		}
		free(u);
		u = NULL;
	}
	if (u != NULL)
	{
		free(u);
		u = NULL;
	}
	if (fclose(fp) != 0)
	{
		printf("\n cannot close Database.");
		delay(3000);
		exit(1);
	}
	return 0;
}


int check_legal_addcar(char* licensenum, char* year, char* month, char* day, 
						int type, int nature, int *usernum, int *carnum)
{
	int i;
	int inputed = 0;	//�ж��Ƿ�������
	int format_licensenum = 0;   //�ж������ַ��Ƿ����Ҫ��
	int format_date = 0;
	char choice_str_type[2];
	char choice_str_nature[2];
	choice_str_type[0] = '0' + type;
	choice_str_nature[0] = '0' + nature;
	choice_str_type[1] = '\0';
	choice_str_nature[1] = '\0';

	
	while(1)
	{
		coverhz(60,220,11);
		coverhz(60,280,11);
		setfillstyle(SOLID_FILL,11);
		bar(525, 120, 640, 250);
		
		if(type == 0)
		puthz(60, 230, "��ѡ���ͺ�", 16, 17, RED);
		if(nature == 0)
		puthz(60, 290, "��ѡ������", 16, 17, RED);
	
		judgeinput(licensenum,&inputed,525,130);	//�жϸ�ʽ�Ƿ����Ҫ��
		judgeinput(year,&inputed,525,193);
		judgeinput(month,&inputed,525,193);
		judgeinput(day,&inputed,525,193);
		
		if(inputed == 1)
		{
			break;
		}
		else if(inputed == 0)
		{
			if(check_samecar(licensenum) == 0)	//�����
			{
				format_licensenum = check_license_dig (licensenum,525,130);	//�����ϸ�ʽ��Ϊ 1
				format_date = check_date(year,month,day,525,193);
			
				if(format_licensenum != 1 || format_date != 1)	
				{
					break;
				}
				else if(format_licensenum == 1 && format_date == 1 && type != 0 && nature != 0)
				{
					write_cardata(licensenum,year,month,day,choice_str_type,choice_str_nature,usernum,carnum);
					button(30,70,800,800,LIGHTCYAN,LIGHTCYAN,3);	//���������
					button(200,200,430,300,CYAN,LIGHTGRAY,3);				
					puthz(256,238, "�󶨳ɹ���", 24, 28, BLUE);
					return 1;
					
				}
			}
			else
			{
				break;
			}
			
		}
	}
	return 0;
}

void write_cardata(char* licensenum, char* year, char* month, char* day,
					char* choice_str_type, char* choice_str_nature, int *usernum, int *carnum)
{
	FILE *fp ;
	Car *c = NULL;
	
	if( (fp = fopen("Database\\UserData.dat", "rb+" )) == NULL )	//open userdata.dat in fp
	{
		printf("Error! Can't Open \"UserData.dat\" File");
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
	
	strcpy(c->licensenum,licensenum);			//copy licensenum to C.licensenum
	strcpy(c->regdate.year,year);
	strcpy(c->regdate.month,month);
	strcpy(c->regdate.day,day);
	strcpy(c->type,choice_str_type);
	strcpy(c->nature,choice_str_nature);
	fseek(fp, (*usernum + 1) * sizeof(User) + (*carnum - 3) * sizeof(Car) , SEEK_SET);//��ת�û���һ�����೵��λ��
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
