#include "WritingRoom.h"

void lun_tan_ti()
{
	char a;
	int i;
	int temp;
	int L;
	int target;
	int flag;
	FILE *p = NULL; //作品名字的指针
	char name[200]="n";//输入的作品的名字
	char u_type[200] ="txt";//文档格式，默认为txt	
	char type[200] =".";//文档格式，默认为txt
	char answer;//是否要更改格式
	char space[10] = " ";

	i = 10;
	flag = 0;
	L = 48;
	temp = 0;

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
		else if(answer=='Y'||answer=='y')//更改
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
	scanf("%s",name);
	strcat(name, type);
	printf("%s",name);

	p = fopen(name, "a");  //打开/新建一个文件
	
	system("cls");   //清屏

	printf("欢迎来到论坛体生成器。\n");
	printf("使用说明：\n");
	printf("输入格式为：\n");
	printf("发言人id: /\n内容\n");
	printf("例如：\n 楼主/\n你好\n");
	printf("输出后的格式为：L1 楼主\n你好\n\n如果层主为匿名，请输入空格略过。");
	printf("在书写过程中输入-跳出菜单来进行换层和退出。");
	


	while (1)
	{
		scanf("%c", &a);
		if(flag==0)
		{ 
			fputc('L',p);
			if (i>9)
			{
				temp = i;
			}
			while (i >= 10)
			{
				L = i / 10+48;
				i = i % 10;
				fputc(L, p);
			}
			L = 48 + i;
			printf("flag=0,当前i=%d,L=%d\n", i, L);
			fputc(L, p);
			fputc(32, p);
			flag = 1;
			scanf("%c",&a);
		}
		if (a == '-')
		{
			printf("\n\n菜单：\n\t1.按下1，换楼层。\n\t2.按下2，退出程序。");
			scanf("%c", &a);
			scanf("%c",&answer);
			//scanf("%c", &a);
			if (answer == '2')
			{
				printf("退出。\n");
				break;
			}
			else if (answer=='1')
			{
				printf("换楼层,当前i=%d,L=%d\n",i,L);
				flag = 0;
				fputc(13,p);
				i++;
			}
		}
		else if(a=='/')
		{
			fputc(13, p);
		}
		else
		{
			fputc(a, p);
		}
		printf("%c",a);
	}
	system("pause");


}
