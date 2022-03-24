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
			case(0):   //初始界面
				start(&page);
				break;
				
			case(1):   //关闭按钮
				delay(1000);
			    closegraph();
			    exit(1);
				
			case(2):   //用户注册
				regist(&page);
				break;
				
			case(3):   //用户登录
				enter(&page);
				break;
				
			case(4):   //管理员登录
				administ(&page);
				break;
				
			case(5):   //忘记密码
			    forget(&page);
				break;
				
			case(6):   //主页
				home(&page);
				break;
				
			case(7):   //服务
				service(&page);
				break;
				
			case(8):   //我的
				mine(&page);
				break;
				
			case(9):   //买车险
				insure(&page);
				break;
				
			case(10):   //查保单
				policy(&page);
				break;
				
			/*case(11):   //办理赔
				claim(&page);
				break;*/
			//管理员界面
			//买车险界面
			//忘记密码界面
			//
		}
	}
}