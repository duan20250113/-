 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
//�����rand��ͷ�ļ�
#include<time.h>
//ʱ�����ͷ�ļ�
//	int main()
//{
//	int i=14;
//	int a;
//	int play;
//	printf("�Ƿ�ʼ��Ϸ");
//	scanf("%d", &play);
//	switch (play)
//	{
//	case 0:printf("�˳���Ϸ");
//		   return 0;
//	 case 1:printf("��ʼ��Ϸ");
//	}
//	while (1)
//	{
//		printf("������һ������");
//		scanf("%d", &a);
//		if (a < i)
//			printf("ƫС��");
//		else if (a > i)
//			printf("ƫ����");
//		else if (a = i)
//		{
//			printf("�¶���");
//			break;
//		}
//
//	}
//	return 0;
//}
//�˴����޷�ʵ��������������Ϸ���޷������������i
void mean() 
{
	printf("***********************");
	printf("***��ʼ��1   �رգ�0***");
    printf("***********************\n");
}
void game()
{
	int number = rand(); 

	int p;
	printf("������\n");
	scanf("%d", &p);

	while (1)
	{
		if (p < number)
		{
			printf("��С��,����������\n");
			scanf("%d", &p);
			system("cls");//�����Ļ
		}
		else if (p > number)
		{
			printf("�´���,����������\n");
			scanf("%d", &p);
			system("cls");
		}
		else if (p = number)
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int i;
	srand((unsigned int)time(NULL));
	//ÿ����Ϸ����ֻ�ö���һ�Σ���ʱ������������������������
	
	//��do-while����ʵ����������
	do
	{
	 mean();
	
	 scanf("%d", &i);
	 system("cls");
	 switch(i)
	 {
	 case 0:
		 printf("�˳���Ϸ");
		 break;
	 case 1:
		 printf("��ʼ��Ϸ��������");
		 system("cls");
		 game();
		 break;
	 default :
		 printf("�������,����������");
		 break;
	 }
	}
	while (i);
	//��ʼ��Ϸ�����������ʱ���պ�!=0ʱΪ�棬���Լ���ѭ��
	return 0;
}
