#ifndef _DATASTRUCT_H_
#define _DATASTRUCT_H_

typedef struct userinfo
{
	char name[13];			//4-12λ�û�����
	char password[17];		//4-16λ����
	char ID[19];			//18λ���֤����
	char tele[12];			//11λ�绰����
}User;		//��װ�û���Ϣ

typedef struct datetime
{
	char year[5];			//��
	char month[5];			//��
	char day[3];			//��
	char hour[3];			//ʱ
	char min[3];			//��
}Date;		//ʱ��

typedef struct carinfo
{
	char licensenum[7];		//6λ���ƺ���
	char caridnum[6];		//5λ���ܺ���
	char enginenum[6];		//5λ��������
	int type;				//����Ʒ���ͺ�
	int nature;				//����ʹ������
	char seatnum[5];		//��λ����
	Date regdate;			//����ע������
}Car;		//��װ������Ϣ

typedef struct vioinfo
{
	char name[13];			//4-12λ�û�����
	char licensenum[7];		//6λ���ƺ���
	char viotype[5];		//��������
	char viomoney[5];		//��������ã�
	Date viotime;			//Υ������
}Vio;		//��װΥ����Ϣ

typedef struct insuranceinfo
{
	char name[13];			//4-12λ�û�����
	char licensenum[7];		//6λ���ƺ���
	char insurancetype[4];	//3�ֱ�������
	Date insuranceenddate;	//���յ�������
}Insurance;	//��װ���յ���Ϣ

#endif
	
	