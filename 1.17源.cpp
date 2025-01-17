#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int Max(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max;
		max = Max(num1, num2);
		printf("max=%d", max);
	return 0;
}