#ifndef _COMMONFUNC_H_
#define _COMMONFUNC_H_

void button (int x1,int y1,int x2,int y2,int framecolor,int fillcolor,int framewidth);
//����ť����

void input (char* id, int x1, int y1, int charnum, int color, int flag);
//������ַ����������xy��������ַ����ƣ���������ɫ������ģʽ

void coverhz (int x, int y, int color);
//�ڸ��ַ�

void show_tickcross(int x1, int y1, int x2,int y2, int flag);
//flag == 1 show tick, else cross,xy base on cross.

void captcha (char* str);
//5λ��֤��

int show_car(User* u, int x,int y,int flag, int *state);


int check_captcha (char* str1, char* str2,int x, int y);
//�ж���֤���Ƿ���ȷ

int check_samename(char* name, int flag);
//flag 1--�û��ѱ�ע��, 2--�˺Ŵ���, 3--�����

int output_userinfo(User *us, int *usernum, int *carnum);
//���User���ϵ�main

int check_license_dig(char* str, int x, int y);


int judge_samecar(char* new_car);


int check_date(char* year, char* month, char* date, int x, int y);
//�ж������Ƿ���ȷ

int legal_date(int year, int month, int date, int x, int y);
//�ж������Ƿ�Ϸ�

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

void single(int *state1, int *state2, int *state3, int *state4, int *state5, int x1, int y1,
			int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5);
//ʵ�ֵ�ѡ��ѡ������һ��ʱ�����������㣩

void price(int *state1, int *state2, int *state3, int *state4, int *state5, int *state6,
			int cost1, int cost2, int cost3, int cost4, int cost5, int cost6, int cost, char *charge, int x, int y);
//��ѡ֮����ʾ�۸�
#endif