#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
int randN1N2(int rN1,int rN2);/*����һ��rn1��rn2֮�������*/
int randOper4();/*��������randN1N2( )����1��4�������*/
int randLmt100();/*����randN1N2( )����0-99֮����������*/
int addLmt100(int num1, int num2);/*��*/
int subLmt100(int num1, int num2);/*��*/
int mulLmt100(int num1, int num2);/*��*/
int divLmt100(int num1, int num2);/*��*/
void main()
{
	int proNum[4],ansNum[4],sFlag=1,a,b,oper,d,panduan=0;/*pro�ǳ��֣�ans����ȷ,sFlag������־*/
	char c,cc;
	srand((unsigned)time( NULL ));
	printf("��ӭ����100���ڵ�����������Ϸ\n");
	for (d=0;d<4;d++)
	{
		proNum[d]=0;
		ansNum[d]=0;
	}
	d=1;
	do
	{
		oper=randOper4();
		a=randLmt100();
		b=randLmt100();
		printf("��%d��\n",d);
		d=d+1;
		switch(oper)
		{
			case 1:
				proNum[0]++;
				panduan=addLmt100(a,b);
				if (panduan==1)
					ansNum[0]++;
				break;
			case 2:
				proNum[1]++;
				panduan=subLmt100(a,b);
				if (panduan==1)
					ansNum[1]++;
				break;
			case 3:
				proNum[2]++;
				panduan=mulLmt100(a,b);
				if (panduan==1)
					ansNum[2]++;
				break;
			case 4:
				proNum[3]++;
				loop:
				a=randLmt100();
				b=randLmt100();
				if ((a%b)==0)
					panduan=divLmt100(a,b);
				else
					goto loop;
				if (panduan==1)
					ansNum[3]++;
				break;
		}
		panduan=0;
		cc=getchar();
		printf("��������,ֱ�Ӵ�س�;���������,����������ĸ'N'��'n'���س�\n");
		c=getchar();
		if (toupper(c)=='N')
			sFlag=0;
	}
	while(sFlag==1);
	printf("-----------------------------------------\n");
	printf("�����˼ӷ�������Ŀ%d��,�����%d��\n",proNum[0],ansNum[0]);
	printf("�����˼���������Ŀ%d��,�����%d��\n",proNum[1],ansNum[1]);
	printf("�����˳˷�������Ŀ%d��,�����%d��\n",proNum[2],ansNum[2]);
	printf("�����˳���������Ŀ%d��,�����%d��\n",proNum[3],ansNum[3]);
}

int randN1N2(int rN1,int rN2)/*����һ��rn1��rn2֮�������*/
{
	return(rand()%(rN2-rN1+1)+(rN1));
}
	
int randOper4()/*��������randN1N2( )����1��4�������*/
{
	int a=1,b=4;
	return(randN1N2(a,b));
}

int randLmt100()/*����randN1N2( )����0-99֮����������*/
{
	int a=0,b=99;
	return(randN1N2(a,b));
}

int addLmt100(int num1, int num2)/*��*/
{
	int x,answer;
	printf("%2d + %2d=?\n",num1,num2);
	x=num1+num2;
	printf("your answer is=");
	scanf("%d",&answer);
	if (x==answer)
	{
		printf("�������666\n");
		return(1);
	}
	else
	{
		printf("������˼�𰸴��˼���Ŭ��\n");
		printf("��ȷ����%d\n",x);
		return(0);
	}
}

int subLmt100(int num1, int num2)/*��*/
{
	int x,answer,y;
	if (num1<(num2))
	{
		y=num1;
		num1=num2;
		num2=num1;
	}
	printf("%2d - %2d=?\n",num1,num2);
	x=num1-num2;
	printf("your answer is=");
	scanf("%d",&answer);
	if (x==answer)
	{
		printf("�������666\n");
		return(1);
	}
	else
	{
		printf("������˼�𰸴��˼���Ŭ��\n");
		printf("��ȷ����%d\n",x);
		return(0);
	}
}

int mulLmt100(int num1, int num2)/*��*/
{
	int x,answer;
	printf("%2d * %2d=?\n",num1,num2);
	x=num1*num2;
	printf("your answer is=");
	scanf("%d",&answer);
	if (x==answer)
	{
		printf("�������666\n");
		return(1);
	}
	else
	{
		printf("������˼�𰸴��˼���Ŭ��\n");
		printf("��ȷ����%d\n",x);
		return(0);
	}
}

int divLmt100(int num1, int num2)/*��*/
{
	int x,answer;
	printf("%2d / %2d=?\n",num1,num2);
	x=num1/num2;
	printf("your answer is=");
	scanf("%d",&answer);
	if (x==answer)
	{
		printf("�������666\n");
		return(1);
	}
	else
	{
		printf("������˼�𰸴��˼���Ŭ��\n");
		printf("��ȷ����%d\n",x);
		return(0);
	}
}