#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = {};
	for (i = 0;i < 10;i++)
	{
		printf("请输入第%d个数字", i + 1);
		scanf("%d", &arr[i]);

	}
	int max = arr[0];
	//不写max=0是为了避免输入的数含负数
	for(i=1;i<10;i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("最大值为%d", max);
	return 0;
}