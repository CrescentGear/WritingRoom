#include "WritingRoom.h"

void xiao_hei_wu()
{
	int i;
	char a;
	int target;
	FILE *p = NULL; //��Ʒ���ֵ�ָ��
	char name[200] = "n";//�������Ʒ������
	char u_type[200] = "txt";//�ĵ���ʽ��Ĭ��Ϊtxt	
	char type[200] = ".";//�ĵ���ʽ��Ĭ��Ϊtxt
	char answer;//�Ƿ�Ҫ���ĸ�ʽ

	while (1)
	{
		printf("��ǰģʽΪ��̳����������\n");
		printf("Ĭ�����ɵ��ĵ��ĸ�ʽΪ.txt���Ƿ�Ҫ����Ϊ������ʽ��\nY\N\n");
		scanf(" %c", &answer); //�����ʽ
		if (answer == 'N' || answer == 'n')//�Ƿ�Ҫ����Ĭ�ϸ�ʽ //������
		{
			printf("��Ϣȷ�ϣ���ǰ�ĸ�ʽΪ.txt��\n");
			break;
		}
		else if (answer == 'Y' || answer == 'y')//����
		{
			printf("��Ϣȷ�ϣ���ǰ�ĵ��������ʽ����Ϊ�Զ��塣\n");
			printf("�������Ҫ���ɵ��ĵ�Ϊtxt�ļ��������Ժ�����txt�������Ҫ���ɵ��ĵ�Ϊdoc�ļ���������doc��\n");
			printf("�������������ɵ��ĵ���ʽ:\n");
			scanf("%s", u_type);
			printf("��Ϣȷ�ϣ���ǰ�ĸ�ʽΪ%s��\n", u_type);
			break;
		}
		else
		{
			printf("����Ļش𲻷��ϸ�ʽ�����������롣\n");
		}
	}

	strcat(type, u_type); //�����ַ���
	printf("%s\n", type); //�˶�
	printf("�������ĵ������ơ�\n");
	scanf("%s", name);
	strcat(name, type);
	printf("%s", name);

	p = fopen(name, "a");  //��/�½�һ���ļ�

	i = 0;
	printf("��������Ҫ��д��������");
	scanf("%d", &target);
	printf("����д����������-ǿ���˳���");
	while (target < 0)
	{
		printf("��ʽ�������������롣\n");
		printf("��������Ҫ��д��������");
		scanf("%d", &target);
	}
	while (i < target * 2 + 4)
	{
		scanf("%c", &a);
		fputc(a, p);
		if (a == '-')
		{
			printf("\n\n�Ƿ�Ҫ�˳�?\n��Y/N��");
			scanf(" %c", &answer);
			if (answer == 'Y' || answer == 'y')
			{
				printf("�˳���\n");
				break;
			}
		}
		i++;
	}
	system("pause");

}
