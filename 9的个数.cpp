 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int a = 1;
	int count = 0;
	for (a = 1;a <= 100;a++)
	{
		if (a % 10 == 9)
			count++;
		if (a / 10 == 9)
			count++;
	}
	printf("%d", count);
	return 0;
}