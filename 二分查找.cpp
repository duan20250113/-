#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int arr[] = {1,5,6,7,8,9,14,15,16};
	int left = 0;
	int right = sizeof arr / sizeof arr[0]-1;
	//���±�ǵ�Ԫ�ظ�����һ
	int middle ;
	int i=0;
	printf("��������Ҫ��ѯ������");
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
			printf("�ҵ��ˣ��±���%d", middle);
			return 0;
		}
	}
	printf("û��");
	return 0;
}
