 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
//随机数rand的头文件
#include<time.h>
//时间戳的头文件
//	int main()
//{
//	int i=14;
//	int a;
//	int play;
//	printf("是否开始游戏");
//	scanf("%d", &play);
//	switch (play)
//	{
//	case 0:printf("退出游戏");
//		   return 0;
//	 case 1:printf("开始游戏");
//	}
//	while (1)
//	{
//		printf("请输入一个数字");
//		scanf("%d", &a);
//		if (a < i)
//			printf("偏小了");
//		else if (a > i)
//			printf("偏大了");
//		else if (a = i)
//		{
//			printf("猜对了");
//			break;
//		}
//
//	}
//	return 0;
//}
//此代码无法实现连续的游玩游戏，无法随机产生数字i
void mean() 
{
	printf("***********************");
	printf("***开始：1   关闭：0***");
    printf("***********************\n");
}
void game()
{
	int number = rand(); 

	int p;
	printf("请输入\n");
	scanf("%d", &p);

	while (1)
	{
		if (p < number)
		{
			printf("猜小了,请重新输入\n");
			scanf("%d", &p);
			system("cls");//清空屏幕
		}
		else if (p > number)
		{
			printf("猜大了,请重新输入\n");
			scanf("%d", &p);
			system("cls");
		}
		else if (p = number)
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int i;
	srand((unsigned int)time(NULL));
	//每次游戏种子只用定义一次；拿时间戳来设置随机数的生成种子
	
	//用do-while可以实现连续游玩
	do
	{
	 mean();
	
	 scanf("%d", &i);
	 system("cls");
	 switch(i)
	 {
	 case 0:
		 printf("退出游戏");
		 break;
	 case 1:
		 printf("开始游戏：猜数字");
		 system("cls");
		 game();
		 break;
	 default :
		 printf("输入错误,请重新输入");
		 break;
	 }
	}
	while (i);
	//开始游戏或者输入错误时，刚好!=0时为真，可以继续循环
	return 0;
}
