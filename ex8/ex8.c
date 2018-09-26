#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
int randN1N2(int rN1,int rN2);/*返回一个rn1和rn2之间随机数*/
int randOper4();/*调用上述randN1N2( )返回1至4间随机数*/
int randLmt100();/*调用randN1N2( )返回0-99之间的随机整数*/
int addLmt100(int num1, int num2);/*加*/
int subLmt100(int num1, int num2);/*减*/
int mulLmt100(int num1, int num2);/*乘*/
int divLmt100(int num1, int num2);/*除*/
void main()
{
	int proNum[4],ansNum[4],sFlag=1,a,b,oper,d,panduan=0;/*pro是出现，ans是正确,sFlag继续标志*/
	char c,cc;
	srand((unsigned)time( NULL ));
	printf("欢迎来到100以内的四则运算游戏\n");
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
		printf("第%d题\n",d);
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
		printf("若继续玩,直接打回车;若不想继续,键盘输入字母'N'或'n'后打回车\n");
		c=getchar();
		if (toupper(c)=='N')
			sFlag=0;
	}
	while(sFlag==1);
	printf("-----------------------------------------\n");
	printf("出现了加法类型题目%d次,共答对%d次\n",proNum[0],ansNum[0]);
	printf("出现了减法类型题目%d次,共答对%d次\n",proNum[1],ansNum[1]);
	printf("出现了乘法类型题目%d次,共答对%d次\n",proNum[2],ansNum[2]);
	printf("出现了除法类型题目%d次,共答对%d次\n",proNum[3],ansNum[3]);
}

int randN1N2(int rN1,int rN2)/*返回一个rn1和rn2之间随机数*/
{
	return(rand()%(rN2-rN1+1)+(rN1));
}
	
int randOper4()/*调用上述randN1N2( )返回1至4间随机数*/
{
	int a=1,b=4;
	return(randN1N2(a,b));
}

int randLmt100()/*调用randN1N2( )返回0-99之间的随机整数*/
{
	int a=0,b=99;
	return(randN1N2(a,b));
}

int addLmt100(int num1, int num2)/*加*/
{
	int x,answer;
	printf("%2d + %2d=?\n",num1,num2);
	x=num1+num2;
	printf("your answer is=");
	scanf("%d",&answer);
	if (x==answer)
	{
		printf("你真聪明666\n");
		return(1);
	}
	else
	{
		printf("不好意思答案错了继续努力\n");
		printf("正确答案是%d\n",x);
		return(0);
	}
}

int subLmt100(int num1, int num2)/*减*/
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
		printf("你真聪明666\n");
		return(1);
	}
	else
	{
		printf("不好意思答案错了继续努力\n");
		printf("正确答案是%d\n",x);
		return(0);
	}
}

int mulLmt100(int num1, int num2)/*乘*/
{
	int x,answer;
	printf("%2d * %2d=?\n",num1,num2);
	x=num1*num2;
	printf("your answer is=");
	scanf("%d",&answer);
	if (x==answer)
	{
		printf("你真聪明666\n");
		return(1);
	}
	else
	{
		printf("不好意思答案错了继续努力\n");
		printf("正确答案是%d\n",x);
		return(0);
	}
}

int divLmt100(int num1, int num2)/*除*/
{
	int x,answer;
	printf("%2d / %2d=?\n",num1,num2);
	x=num1/num2;
	printf("your answer is=");
	scanf("%d",&answer);
	if (x==answer)
	{
		printf("你真聪明666\n");
		return(1);
	}
	else
	{
		printf("不好意思答案错了继续努力\n");
		printf("正确答案是%d\n",x);
		return(0);
	}
}