#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int a = 24;
	int b = 18;
	int n = a % b;
	int tem;
	for (;n != 0;)
	{
		
		a = b;
		b = n;
		n = a % b;
	}
	printf("%d", b);
	return 0;
	}
