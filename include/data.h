#ifndef _DATA_H_
#define _DATA_H_

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
	char type[2];			//����Ʒ���ͺ�
	char nature[2];			//����ʹ������
	Date regdate;			//����ע������
}Car;

typedef struct userinfo
{
	char name[13];			//4-12λ�û�����
	char password[17];		//4-16λ����
	char ID[19];			//18λ���֤����
	char tele[12];			//11λ�绰����
	Car  car[3];			//ÿ���û������̨����
}User;		//��װ�û���Ϣ

typedef struct vioinfo
{
	char licensenum[7];		//6λ���ƺ���
	char viotype[5];		//��������
	char viomoney[5];		//��������ã�
	Date viotime;			//Υ������
}Vio;		//��װΥ����Ϣ

typedef struct claiminfo
{
	char licensenum[7];		//6λ�����ƺ�
	char scenetype[2];      
	char charactertype[2];
	Date claimdate;		 	//����ʱ��
	char state[2];
}Claim;		//��װ��Ϣ

typedef struct insuranceinfo
{
	char licensenum[7];		//6λ���ƺ���
	char insurancetype[2];	//3�ֱ������� //char insurancetype[4];
	Date insuranceenddate;	//���յ�������
}Insurance;	//��װ���յ���Ϣ

#endif
	
	