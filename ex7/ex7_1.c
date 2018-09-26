#include<stdio.h>
#include<string.h>
#define changdu 80
void main()
{
	char ch[changdu],ch1;
	int num,b,c,e,f,num1,num2;
	int g,h,i;
	/*以下是删除相同的字符*/
	gets(ch);
	f=strlen(ch);
	printf("开始一共有%d个字符\n",f);
	e=1;
	for (num=0;num<f;num++)
	{	
		for (b=e;b<f;b++)
			if (ch[num]==ch[b])
			{
				for(c=b;c<(f-1);c++)
					ch[c]=ch[c+1];
				f=f-1;
				ch[f]='\0';
				b=b-1;
			}	
		e=e+1;	
	}
	printf("%s\n",ch);
	printf("删除后一共有%d个字符\n",f);
	/*以下是冒泡排序字符*/
	for(g=f;g>1;g=g--)
	{
		for(h=0;h<(g-1);h=h++)
		{
			num1=int(ch[h]);
			num2=int(ch[h+1]);
			if (num1>=num2)
			{
				ch1=ch[h+1];
				ch[h+1]=ch[h];
				ch[h]=ch1;
			}
		}
	}
	printf("字符串按ASCII码从小到大排列为:\n");
	printf("%s\n",ch);
}