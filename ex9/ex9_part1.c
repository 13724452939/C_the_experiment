#include"stdio.h"
#define geshu 3
struct student 
{
	char name[20]; //姓名
	float score[4]; //四门功课的成绩
	float average; //四门功课的平均成绩
};
void inputFromKeyboard(struct student stu[], int num);
	//从键盘输入学生信息的函数。stu 为结构体数组，num 为数组中元素的个数。
void outputToScreen(struct student stu[], int num);
	//将学生信息输出到屏幕的函数。stu 为结构体数组，num 为数组中元素的个数。
void averageScore(struct student stu[], int num);
	//计算学生平均成绩的函数。stu 为结构体数组，num 为数组中元素的个数。
void sortByAverageScore(struct student stu[], int num);
	//根据学生的平均成绩对学生信息整体排序的函数。stu 为结构体数组，num 为数组中元素的个数。
void inputFromFile(struct student stu[], int num, FILE *fp);
	//从文件输入学生信息的函数。stu 为结构体数组，num 为数组中元素的个数，fp 为以“读”方式打开的文本文件的指针。
void outputToFile(struct student stu[], int num, FILE *fp);
	//将学生信息输出到文件的函数。stu 为结构体数组，num 为数组中元素的个数，fp 为以“写”方式打开的文本文件的指针。

void main()
{
	struct student stu[geshu];
	inputFromKeyboard(stu,geshu);
	averageScore(stu,geshu);
	outputToScreen(stu,geshu);
}

void inputFromKeyboard(struct student stu[], int num)//输入学生信息nun表明有几个学生
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