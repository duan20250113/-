#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = {};
	for (i = 0;i < 10;i++)
	{
		printf("�������%d������", i + 1);
		scanf("%d", &arr[i]);

	}
	int max = arr[0];
	//��дmax=0��Ϊ�˱����������������
	for(i=1;i<10;i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("���ֵΪ%d", max);
	return 0;
}