#ifndef _COMMONFUNC_H_
#define _COMMONFUNC_H_

void button (int x1,int y1,int x2,int y2,int framecolor,int fillcolor,int framewidth);
//����ť����

void input(char* id, int x1, int y1, int charnum, int color, int flag);
//������ַ����������xy��������ַ����ƣ���������ɫ������ģʽ

void captcha (char* str);
//5λ��֤��

int checkcaptcha(char* str1, char* str2,int x, int y);
//�ж�

void judgeinput(char* str,int* state,int x,int y);
//�ж��Ƿ�������

int check_username_dig(char* str,int x,int y);
//�ж�

int check_comfirmpw(char* str1,char* str2,int x,int y);
//�ж�

int check_pw_dig(char* str,int x,int y);
//�ж�

int check_phone_dig(char* str,int x,int y);
//�ж�

int check_id(char* str,int x,int y);
//�ж�

#endif