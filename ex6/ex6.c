#include<stdio.h>
#include<string.h>
#include"stdlib.h"
#include"time.h"
#include"conio.h"
#define num 19
void main()
{
	int rArray[num],b,c,d,i,j,k,t;
	char cArray[50],e;
	srand((unsigned)time( NULL ));
	for(b=0;b<=num;b=b+1)
		rArray[b]=rand()%50+1;
	memset(cArray,0,50*sizeof(char));
	printf("20个随机数及其*图\n");
	for(b=0;b<(num);b=b+1)
	{
		printf("[%2d]  %2d  ",b,rArray[b]);
		for(c=1;c<=rArray[b];c=c+1)
			printf("*");
		printf("\n");
	}
	printf("等待键盘打回车后进行冒泡排序\n");
	e=getch();
	for(b=num;b>0;b=b-1)
	{
		for(c=0;c<(b-1);c=c+1)
			if (rArray[c]<=rArray[c+1])
			{
				d=rArray[c+1];
				rArray[c+1]=rArray[c];
				rArray[c]=d;
			}
	}
	printf("冒泡排序后的结果及其棒图\n");
	for(b=0;b<(num);b=b+1)
	{
		printf("[%2d]  %2d  ",b,rArray[b]);
		for(c=1;c<=rArray[b];c=c+1)
			printf("*");
		printf("\n");
	}
	printf("等待键盘打回车后进行选择排序\n");
	e=getch();
	for(i=0;i<(num-1);i=i+1)
	{
		k=i;
		for(j=i+1;j<(num);j=j+1)
			if(rArray[k]>rArray[j])
				k=j;
		if(k!=i)
		{
			t=rArray[i];
			rArray[i]=rArray[k];
			rArray[k]=t;
		}
	}
	printf("选择排序后的结果及其棒图\n");
	for(b=0;b<(num);b=b+1)
	{
		printf("[%2d]  %2d  ",b,rArray[b]);
		for(c=1;c<=rArray[b];c=c+1)
			printf("*");
		printf("\n");
	}
	printf("\n");
	printf("等待键盘打回车后结束");
	e=getch();
}