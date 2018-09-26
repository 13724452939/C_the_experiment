#include<stdio.h>
#include<string.h>
#define changdu 80
void main()
{
	char ch[changdu],ch1;
	char origin[changdu];
	int num,b,c,e,f,g,geshu,panduan,weizhi;
	float h;
	/*得到无重复的字符串*/
	gets(ch);
	strcpy(origin,ch);
	f=strlen(ch);
	g=f;
	printf("开始一共有%d个字符\n",g);
	e=1;
	for (num=0;num<(f);num++)
	{	
		for (b=e;b<(f);b++)
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
	printf("该字符串经过处理后无重复的字符串是%s\n",ch);
	/*用新字符串去对比得到每个字符出现的字数*/
	panduan=0;
	for (num=0;num<(f);num++)
	{
		geshu=0;
		for (b=0;b<(g);b++)
			if (ch[num]==origin[b])
				geshu++;
		h=geshu/float(g);
		if (h>0.5)
		{
			panduan=1;
			weizhi=num;
		}
		printf("处理后的第%d个字符:%c出现了%d次\n",(num+1),ch[num],geshu);
	}
	if (panduan==1)	
		printf("其中一个字符出现次数超过字符长度的一半,这个字符是%c\n",ch[weizhi]);
	else
		printf("没有字符出现次数超过字符长度的一半\n");
}