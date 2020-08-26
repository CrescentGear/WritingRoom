#include "WritingRoom.h"

void xiao_hei_wu()
{
	int i;
	char a;
	int target;
	FILE *p = NULL; //作品名字的指针
	char name[200] = "n";//输入的作品的名字
	char u_type[200] = "txt";//文档格式，默认为txt	
	char type[200] = ".";//文档格式，默认为txt
	char answer;//是否要更改格式

	while (1)
	{
		printf("当前模式为论坛体生成器。\n");
		printf("默认生成的文档的格式为.txt，是否要设置为其他格式。\nY\N\n");
		scanf(" %c", &answer); //输入格式
		if (answer == 'N' || answer == 'n')//是否要更改默认格式 //不更改
		{
			printf("信息确认，当前的格式为.txt。\n");
			break;
		}
		else if (answer == 'Y' || answer == 'y')//更改
		{
			printf("信息确认，当前文档的输出格式设置为自定义。\n");
			printf("（如果想要生成的文档为txt文件，请在稍后输入txt。如果想要生成的文档为doc文件，请输入doc）\n");
			printf("请输入你想生成的文档格式:\n");
			scanf("%s", u_type);
			printf("信息确认，当前的格式为%s。\n", u_type);
			break;
		}
		else
		{
			printf("输入的回答不符合格式，请重新输入。\n");
		}
	}

	strcat(type, u_type); //连接字符串
	printf("%s\n", type); //核对
	printf("请输入文档的名称。\n");
	scanf("%s", name);
	strcat(name, type);
	printf("%s", name);

	p = fopen(name, "a");  //打开/新建一个文件

	i = 0;
	printf("请输入你要想写的字数：");
	scanf("%d", &target);
	printf("在书写过程中输入-强制退出。");
	while (target < 0)
	{
		printf("格式有误，请重新输入。\n");
		printf("请输入你要想写的字数：");
		scanf("%d", &target);
	}
	while (i < target * 2 + 4)
	{
		scanf("%c", &a);
		fputc(a, p);
		if (a == '-')
		{
			printf("\n\n是否要退出?\n（Y/N）");
			scanf(" %c", &answer);
			if (answer == 'Y' || answer == 'y')
			{
				printf("退出。\n");
				break;
			}
		}
		i++;
	}
	system("pause");

}
