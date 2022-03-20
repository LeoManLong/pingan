#include "common.h"
#include "commonfunc.h"


void button(int x1,int y1,int x2,int y2,int framecolor,int fillcolor,int framewidth){
	clrmous(MouseX, MouseY); 
	delay(10);
	setcolor(framecolor);
	setlinestyle(SOLID_LINE, 0, framewidth); //width = "1" or "3" pixel
	setfillstyle(1, fillcolor);
	bar(x1, y1, x2, y2);
	rectangle(x1, y1, x2, y2);
}

/*********************************************
FUNCTION:input
DESCRIPTION：flag = 1时输入账号、身份证号等无需隐藏的信息
			 flag = 2时输入密码等需要隐藏的信息
INPUT:id,x1,y1,charnum,color
RETURN:无
***********************************************/  
void input(char* id, int x1, int y1, int charnum, int color, int flag)//输入的字符串，输入的xy，输入的字符限制，输入框的颜色，输入模式
{
	int i = 0;
	char t;
	setfillstyle(SOLID_FILL, color);
	setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
	setcolor(8);
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, flag);
	settextjustify(LEFT_TEXT, TOP_TEXT);
	line(x1 + 10, y1 + 6, x1 + 10, y1 + 20);
	while(bioskey(1))
		getch();//删掉之前键盘乱按的无用字符
	while (1)
	{
		t = bioskey(0); 
		if (t != '\n' && t != '\r' && t != ' ' && t != 033)//Esc
		{
			if (t != '\b' && i < charnum)
			{
				*(id + i) = t;
				*(id + i + 1) = '\0';
				bar(x1 + 8 + i * 18, y1 + 3, x1 + 12 + i * 18, y1 + 24); //遮盖光标
				if(flag == 1)
					outtextxy(x1 + 8 + i * 18, y1 + 3, "*");//输出 ‘*’
				else
					outtextxy(x1 + 8 + i * 18, y1, id + i);//输出t字符(16)
				i++;
				line(x1 + 10 + i * 18, y1 + 6, x1 + 10 + i * 18, y1 + 20);
			}
			else if (t == '\b' && i > 0)//退格键
			{
				bar(x1 + 8 + i * 18, y1 + 3, x1 + 12 + i * 18, y1 + 24);//遮盖光标
				bar(x1 - 10 + i * 18, y1 + 3, x1 + 7 + i * 18, y1 + 24);//遮盖文字
				i--;//减少一个字数
				line(x1 + 10 + i * 18, y1 + 6, x1 + 10 + i * 18, y1 + 20);//绘制光标
				*(id + i) = '\0';
			}
		}
		else
		{
			bar(x1 + 8 + i * 18, y1 + 3, x1 + 12 + i * 18, y1 + 24);//遮盖光标
			break;
		}
	}
}
