#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int middle = 1;
	int i = 1;
	double a = 0.0;
	for (i = 1;i <= 100;i++)
	{
		a += middle * 1.0 / i;
		middle = -1 * middle;
	}
	printf("%f", a);
	return 0;
}