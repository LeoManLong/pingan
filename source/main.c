#include "main.h"
#include "common.h"

void main()
{
	int page = 0;
	
	int gdriver=VGA;
    int gmode=VGAHI;
    initgraph(&gdriver,&gmode,"C:\\BORLANDC\\BGI");
	
	mouseinit();
	clrmous(MouseX, MouseY);
	delay(100);
	cleardevice();
	
	while(1)
	{
		switch(page)
		{	
			case(0): //初始界面
				start(&page);
				break;
				
			case(1): //关闭按钮
				delay(1000);
				closegraph();
				exit(0);
				
			case(2): //用户注册界面
				regist(&page);
				break;
				
			case(3)://用户登录界面
				enter(&page);
				break;
				
			case(4):
				binding(&page);
				break;
				
			case(5):
				
			//管理员界面
			//买车险界面
			//忘记密码界面
			//
		}
	}
}