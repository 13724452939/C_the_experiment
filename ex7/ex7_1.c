#include<stdio.h>
#include<string.h>
#define changdu 80
void main()
{
	char ch[changdu],ch1;
	int num,b,c,e,f,num1,num2;
	int g,h,i;
	/*������ɾ����ͬ���ַ�*/
	gets(ch);
	f=strlen(ch);
	printf("��ʼһ����%d���ַ�\n",f);
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
	printf("ɾ����һ����%d���ַ�\n",f);
	/*������ð�������ַ�*/
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
	printf("�ַ�����ASCII���С��������Ϊ:\n");
	printf("%s\n",ch);
}