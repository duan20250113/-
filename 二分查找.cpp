#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int arr[] = {1,5,6,7,8,9,14,15,16};
	int left = 0;
	int right = sizeof arr / sizeof arr[0]-1;
	//算下标记得元素个数减一
	int middle ;
	int i=0;
	printf("请输入你要查询的数字");
	scanf("%d", &i);
	while (left<=right)
	{
		middle = (left + right) / 2;
		if (i < arr[middle])
		{
			right = middle-1;
		}
		else if (i > arr[middle])
		{
			left = middle+1;
		}
		else if (i == arr[middle])
		{
			printf("找到了，下标是%d", middle);
			return 0;
		}
	}
	printf("没有");
	return 0;
}
