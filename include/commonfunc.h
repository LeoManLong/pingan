#ifndef _COMMONFUNC_H_
#define _COMMONFUNC_H_

void button (int x1,int y1,int x2,int y2,int framecolor,int fillcolor,int framewidth);
//����ť����

void input (char* id, int x1, int y1, int charnum, int color, int flag);
//������ַ����������xy��������ַ����ƣ���������ɫ������ģʽ

void coverhz (int x, int y, int color);
//�ڸ��ַ�

void captcha (char* str);
//5λ��֤��

int check_captcha (char* str1, char* str2,int x, int y);
//�ж���֤���Ƿ���ȷ

int check_samename(char* name, int flag);
//flag 1--�û��ѱ�ע��, 2--�˺Ŵ���, 3--�����

void judgeinput (char* str,int* state,int x,int y);
//�ж��Ƿ�������

int check_username_dig (char* str,int x,int y);
//�ж��û����Ƴ���

int check_comfirmpw (char* str1,char* str2,int x,int y);
//�ж�ȷ�������Ƿ�������һ��

int check_pw_dig (char* str,int x,int y);
//�ж����볤��

int check_tele_dig (char* str,int x,int y);
//�жϵ绰���볤��

int check_id (char* str,int x,int y);
//�ж����֤��ʽ

void choose(int x,int y,int *state);
//������Ŀ��ѡ

void price(int *state1, int *state2, int *state3, int cost, char *charge, int x, int y);
//��ѡ֮����ʾ�۸�
#endif