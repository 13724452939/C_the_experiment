/*second*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char ch;
	int a=0;
	printf("�����ǰ����������·�����B·��һ����С�����ұ�C·��һ��ƽ̹��·����ѡ��B��C��\n");
	ch=getch();
	switch(ch)
	{
		case 'B':
			printf("�������ֲ�·1������ֳ�3��С·��P·��᫶��ͣ�Q·������ľ������D·ǰ��һƬ�տ�����ѡ��P��Q��D��\n");
			ch=getch();
			switch(ch)
			{
				case 'P':
					printf("�������ֲ�·3����ǰJ·����һ���������ĸ�ͷ�ɼ������ҹս�H���Դﵽ�ֲ�·4����ѡ��J ��H��\n");
					ch=getch();
					switch(ch)
					{
						case 'J':
							printf("������ͷ���¸ҵ�սʤ��Monster,ʤ���ﵽ�յ㣬�������\n");
							printf("������������֣�");
							scanf("\n");
														exit(0);
							break;
						case 'H':
							printf("�������ֲ�·4��������ǰ��K·������Դﵽ�յ㣬��L·�����ǽ���һƬɭ�֣���ѡ��K��L:\n");
							ch=getch();
							switch(ch)
							{
								case 'K':
									printf("����ֶ�Monster����ʧ�ܸ��գ�����ʧ�ܣ���Ϸ������\n");
									exit(0);
									break;
								case 'L':
									printf("�����ï�ܵ�ɭ�֣���·������ʧ�ܣ���Ϸ������\n");
									exit(0);
									break;
							}
							break;
					}
					break;
				case 'Q':
					printf("�������ֲ�·4��������ǰ��K·������Դﵽ�յ㣬��L·�����ǽ���һƬɭ�֣���ѡ��K ��L��\n");
					ch=getch();
					switch(ch)
					{
						case 'K':
							printf("����ֶ�Monster����ʧ�ܸ��գ�����ʧ�ܣ���Ϸ������\n");
							exit(0);
							break;
						case  'L':
							printf("�����ï�ܵ�ɭ�֣���·������ʧ�ܣ���Ϸ������\n");
							exit(0);
							break;
					}
				case 'D':	
					printf("���������£�����ʧ�ܣ���Ϸ������\n");
					exit(0);
					break;	
			}
		case 'C':
			printf("�������ֲ�·2�����E·ǰ��һƬ�տ����м�F����ɽ��·���ұ�G·�Ƚ���ɭ�ڰ�����ѡ��E,F��G\n");
			ch=getch();
			switch(ch)
			{
				case 'E':
					printf("���������£�����ʧ�ܣ���Ϸ������\n");
					exit(0);
					break;
				case 'F':
					printf("������ʱ����棬�������ֲ�·4��������ǰ��K·������Դﵽ�յ㣬��L·�����ǽ���һƬɭ�֣���ѡ��K ��L��\n");
					ch=getch();
					switch(ch)
					{
						case 'K':
							printf("����ֶ�Monster����ʧ�ܸ��գ�����ʧ�ܣ���Ϸ������\n");
							exit(0);
							break;
						case  'L':
							printf("�����ï�ܵ�ɭ�֣���·������ʧ�ܣ���Ϸ������\n");
							exit(0);
							break;
					}
					break;
				case 'G':
					printf("���������������԰Σ�����ʧ�ܣ���Ϸ������\n");
					exit(0);
					break;
			}
			break;
	}
}