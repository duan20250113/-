#include<stdio.h>
int main()
{
	int num1, num2, sum;
	printf("num1=");
	scanf_s("%d", &num1);
	printf("num2=");
	scanf_s("%d", &num2);
	sum = num1 + num2;
	printf("sum=%d", sum);
	return 0;
}