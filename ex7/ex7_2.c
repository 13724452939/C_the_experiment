#include<stdio.h>
#include<string.h>
#define changdu 80
void main()
{
	char ch[changdu],ch1;
	char origin[changdu];
	int num,b,c,e,f,g,geshu,panduan,weizhi;
	float h;
	/*�õ����ظ����ַ���*/
	gets(ch);
	strcpy(origin,ch);
	f=strlen(ch);
	g=f;
	printf("��ʼһ����%d���ַ�\n",g);
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
	printf("���ַ���������������ظ����ַ�����%s\n",ch);
	/*�����ַ���ȥ�Աȵõ�ÿ���ַ����ֵ�����*/
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
		printf("�����ĵ�%d���ַ�:%c������%d��\n",(num+1),ch[num],geshu);
	}
	if (panduan==1)	
		printf("����һ���ַ����ִ��������ַ����ȵ�һ��,����ַ���%c\n",ch[weizhi]);
	else
		printf("û���ַ����ִ��������ַ����ȵ�һ��\n");
}