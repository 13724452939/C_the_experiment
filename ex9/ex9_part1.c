#include"stdio.h"
#define geshu 3
struct student 
{
	char name[20]; //����
	float score[4]; //���Ź��εĳɼ�
	float average; //���Ź��ε�ƽ���ɼ�
};
void inputFromKeyboard(struct student stu[], int num);
	//�Ӽ�������ѧ����Ϣ�ĺ�����stu Ϊ�ṹ�����飬num Ϊ������Ԫ�صĸ�����
void outputToScreen(struct student stu[], int num);
	//��ѧ����Ϣ�������Ļ�ĺ�����stu Ϊ�ṹ�����飬num Ϊ������Ԫ�صĸ�����
void averageScore(struct student stu[], int num);
	//����ѧ��ƽ���ɼ��ĺ�����stu Ϊ�ṹ�����飬num Ϊ������Ԫ�صĸ�����
void sortByAverageScore(struct student stu[], int num);
	//����ѧ����ƽ���ɼ���ѧ����Ϣ��������ĺ�����stu Ϊ�ṹ�����飬num Ϊ������Ԫ�صĸ�����
void inputFromFile(struct student stu[], int num, FILE *fp);
	//���ļ�����ѧ����Ϣ�ĺ�����stu Ϊ�ṹ�����飬num Ϊ������Ԫ�صĸ�����fp Ϊ�ԡ�������ʽ�򿪵��ı��ļ���ָ�롣
void outputToFile(struct student stu[], int num, FILE *fp);
	//��ѧ����Ϣ������ļ��ĺ�����stu Ϊ�ṹ�����飬num Ϊ������Ԫ�صĸ�����fp Ϊ�ԡ�д����ʽ�򿪵��ı��ļ���ָ�롣

void main()
{
	struct student stu[geshu];
	inputFromKeyboard(stu,geshu);
	averageScore(stu,geshu);
	outputToScreen(stu,geshu);
}

void inputFromKeyboard(struct student stu[], int num)//����ѧ����Ϣnun�����м���ѧ��
{
	int i;
	for (i=0;i<(num);i++)
	{
		printf("No.%d student's name:",(i+1));
		gets(stu[i].name);
		printf("No.%d student's English score:",(i+1));
		scanf("%f",&stu[i].score[0]);
		printf("No.%d student's math score:",(i+1));
		scanf("%f",&stu[i].score[1]);
		printf("No.%d student's physics score:",(i+1));
		scanf("%f",&stu[i].score[2]);
		printf("No.%d student's chemistry score:",(i+1));
		scanf("%f",&stu[i].score[3]);
		printf("-------------------------------------------\n");
		getchar();
	}
}

void averageScore(struct student stu[], int num)
{
	int i;
	for (i=0;i<(num);i++)
		stu[i].average=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/4;
}

void outputToScreen(struct student stu[], int num)
{
	int i;
	for (i=0;i<(num);i++)
		printf("%s %5.1f %5.1f %5.1f %5.1f %.1f\n",stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3],stu[i].average);
}