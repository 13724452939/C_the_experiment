/*second*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char ch;
	int a=0;
	printf("你的面前有左右两条路，左边B路是一条羊肠小道，右边C路是一条平坦马路，请选择B或C：\n");
	ch=getch();
	switch(ch)
	{
		case 'B':
			printf("你来到分岔路1，这里分成3条小路，P路崎岖陡峭，Q路两旁树木葱郁，D路前面一片空旷，请选择P、Q或D：\n");
			ch=getch();
			switch(ch)
			{
				case 'P':
					printf("你来到分岔路3，向前J路旁有一把亮闪闪的斧头可捡起，向右拐进H可以达到分岔路4，请选择J 或H：\n");
					ch=getch();
					switch(ch)
					{
						case 'J':
							printf("你拿起斧头，勇敢地战胜了Monster,胜利达到终点，完成任务。\n");
							printf("请输入你的名字：");
							scanf("\n");
														exit(0);
							break;
						case 'H':
							printf("你来到分岔路4，继续向前走K路好像可以达到终点，走L路好像是进入一片森林，请选择K或L:\n");
							ch=getch();
							switch(ch)
							{
								case 'K':
									printf("你空手斗Monster，以失败告终，任务失败，游戏结束。\n");
									exit(0);
									break;
								case 'L':
									printf("你进入茂密的森林，迷路，任务失败，游戏结束。\n");
									exit(0);
									break;
							}
							break;
					}
					break;
				case 'Q':
					printf("你来到分岔路4，继续向前走K路好像可以达到终点，走L路好像是进入一片森林，请选择K 或L：\n");
					ch=getch();
					switch(ch)
					{
						case 'K':
							printf("你空手斗Monster，以失败告终，任务失败，游戏结束。\n");
							exit(0);
							break;
						case  'L':
							printf("你进入茂密的森林，迷路，任务失败，游戏结束。\n");
							exit(0);
							break;
					}
				case 'D':	
					printf("你走下悬崖，任务失败，游戏结束。\n");
					exit(0);
					break;	
			}
		case 'C':
			printf("你来到分岔路2，左边E路前面一片空旷，中间F是绕山公路，右边G路比较阴森黑暗，请选择E,F或G\n");
			ch=getch();
			switch(ch)
			{
				case 'E':
					printf("你走下悬崖，任务失败，游戏结束。\n");
					exit(0);
					break;
				case 'F':
					printf("经过长时间跋涉，你来到分岔路4，继续向前走K路好像可以达到终点，走L路好像是进入一片森林，请选择K 或L：\n");
					ch=getch();
					switch(ch)
					{
						case 'K':
							printf("你空手斗Monster，以失败告终，任务失败，游戏结束。\n");
							exit(0);
							break;
						case  'L':
							printf("你进入茂密的森林，迷路，任务失败，游戏结束。\n");
							exit(0);
							break;
					}
					break;
				case 'G':
					printf("你陷入沼泽，难以自拔，任务失败，游戏结束。\n");
					exit(0);
					break;
			}
			break;
	}
}