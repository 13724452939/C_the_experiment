/*first*/
#include<stdio.h>
#include "stdlib.h"
#include "time.h"
void main()
{
	srand((unsigned)time( NULL ));
	int a,b;
	printf("���û�1���س�����\n");
	getchar(\n);
	a=rand()%6+1;
	printf("����1Ϊ%d\n",a);
	printf("���û�2���س�����\n");
	getchar(\n);
	b=rand()%6+1;
	printf("����2Ϊ%d\n",b);
	if (a>b)
		printf("�û�1ʤ��\n");
	else
		if (b>a)
			printf("�û�2ʤ��\n"); 
		else
			printf("ƽ��\n");
}   
