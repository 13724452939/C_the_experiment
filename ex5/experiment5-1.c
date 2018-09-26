/*first*/
#include<stdio.h>
#include "stdlib.h"
#include "time.h"
void main()
{
	srand((unsigned)time( NULL ));
	int a,b;
	printf("请用户1按回车掷骰\n");
	getchar(\n);
	a=rand()%6+1;
	printf("骰子1为%d\n",a);
	printf("请用户2按回车掷骰\n");
	getchar(\n);
	b=rand()%6+1;
	printf("骰子2为%d\n",b);
	if (a>b)
		printf("用户1胜利\n");
	else
		if (b>a)
			printf("用户2胜利\n"); 
		else
			printf("平局\n");
}   
