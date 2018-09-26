/*geshuΪѧ������*/
#include"stdio.h"
#define geshu 3
struct student 
{
	char name[20]; //����
	float score[4]; //���Ź��εĳɼ�
	float average; //���Ź��ε�ƽ���ɼ�
};
void inputFromKeyboard(struct student stu[], int num);//�Ӽ�������ѧ����Ϣ�ĺ�����
void outputToScreen(struct student stu[], int num);//��ѧ����Ϣ�������Ļ�ĺ�����
void averageScore(struct student stu[], int num);	//����ѧ��ƽ���ɼ��ĺ�����
void sortByAverageScore(struct student stu[], int num);//����ѧ����ƽ���ɼ���ѧ����Ϣ��������ĺ�����
void inputFromFile(struct student stu[], int num, FILE *fp);//���ļ�����ѧ����Ϣ�ĺ�����
void outputToFile(struct student stu[], int num, FILE *fp);//��ѧ����Ϣ������ļ��ĺ�����

void main()
{
	struct student stu[geshu];
	FILE *fp1,*fp2,*fp3;
	fp1=fopen("student1.txt","r");
	inputFromFile(stu,geshu,fp1);
	//inputFromKeyboard(stu,geshu);
	averageScore(stu,geshu);
	fp2=fopen("student2.txt","w");
	fp3=fopen("student3.txt","w");
	outputToFile(stu,geshu,fp2);//û������
	outputToScreen(stu,geshu);
	sortByAverageScore(stu,geshu);
	outputToFile(stu,geshu,fp3);//����֮��
	printf("---------------after sort-----------------\n");
	outputToScreen(stu,geshu);
}

void inputFromKeyboard(struct student stu[], int num)//����Ļ������ѧ����Ϣ
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

void averageScore(struct student stu[], int num)//��ɼ�ƽ��ֵ
{
	int i;
	for (i=0;i<(num);i++)
		stu[i].average=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/4;
}

void outputToScreen(struct student stu[], int num)//����Ļ��������
{
	int i;
	for (i=0;i<(num);i++)
		printf("%s %5.1f %5.1f %5.1f %5.1f %5.1f\n",stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3],stu[i].average);
}

void outputToFile(struct student stu[], int num, FILE *fp)//���ļ������
{
	int i;
	for (i=0;i<(num);i++)
		fprintf(fp,"%s %5.1f %5.1f %5.1f %5.1f %5.1f\n",stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3],stu[i].average);
	fclose(fp);
}

void inputFromFile(struct student stu[], int num, FILE *fp)//���ļ�������
{
	int i;
	for (i=0;i<(num);i++)
		fscanf(fp,"%s%f%f%f%f",&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].score[3]);
	fclose(fp);	
}

void sortByAverageScore(struct student stu[], int num)//ð������
{
	struct student stu0;
	int b,c;
	for(b=num;b>1;b=b-1)
	{
		for(c=0;c<(b-1);c=c+1)
			if (stu[c].average<=stu[c+1].average)
			{
				stu0=stu[c+1];
				stu[c+1]=stu[c];
				stu[c]=stu0;
			}
	}
}