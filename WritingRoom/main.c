

#include "WritingRoom.h"

int main()
{
	int choice;
	printf("��ѡ��С����ģʽ��\n1.С����\n2.��̳��������\n");
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


