

#include "WritingRoom.h"

int main()
{
	int choice;
	printf("请选择小黑屋模式。\n1.小黑屋\n2.论坛体生成器\n");
	scanf("%d", &choice);
	if (choice == 2)
	{
		lun_tan_ti();
	}
	else
	{
		xiao_hei_wu();
	}
	return 0;
}


