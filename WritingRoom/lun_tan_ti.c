#include "WritingRoom.h"

void lun_tan_ti()
{
	char a;
	int i;
	int temp;
	int L;
	int target;
	int flag;
	FILE *p = NULL; //��Ʒ���ֵ�ָ��
	char name[200]="n";//�������Ʒ������
	char u_type[200] ="txt";//�ĵ���ʽ��Ĭ��Ϊtxt	
	char type[200] =".";//�ĵ���ʽ��Ĭ��Ϊtxt
	char answer;//�Ƿ�Ҫ���ĸ�ʽ
	char space[10] = " ";

	i = 10;
	flag = 0;
	L = 48;
	temp = 0;

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
		else if(answer=='Y'||answer=='y')//����
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
	scanf("%s",name);
	strcat(name, type);
	printf("%s",name);

	p = fopen(name, "a");  //��/�½�һ���ļ�
	
	system("cls");   //����

	printf("��ӭ������̳����������\n");
	printf("ʹ��˵����\n");
	printf("�����ʽΪ��\n");
	printf("������id: /\n����\n");
	printf("���磺\n ¥��/\n���\n");
	printf("�����ĸ�ʽΪ��L1 ¥��\n���\n\n�������Ϊ������������ո��Թ���");
	printf("����д����������-�����˵������л�����˳���");
	


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
			printf("flag=0,��ǰi=%d,L=%d\n", i, L);
			fputc(L, p);
			fputc(32, p);
			flag = 1;
			scanf("%c",&a);
		}
		if (a == '-')
		{
			printf("\n\n�˵���\n\t1.����1����¥�㡣\n\t2.����2���˳�����");
			scanf("%c", &a);
			scanf("%c",&answer);
			//scanf("%c", &a);
			if (answer == '2')
			{
				printf("�˳���\n");
				break;
			}
			else if (answer=='1')
			{
				printf("��¥��,��ǰi=%d,L=%d\n",i,L);
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
