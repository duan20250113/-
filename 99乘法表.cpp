 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;

	for (;a < 10;a++)
	{
		for (b = 1;b <= a;b++)
		{
			int product = a * b;
			printf("%d*%d=%2d ", b, a, product);
			//%2d可以避免对不齐
		}
	     printf("\n");
    }
	return 0;
}