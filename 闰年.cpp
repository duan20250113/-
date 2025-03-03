 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int r = 1000;
	for (;r< 2001;r++)
	{
		int a = r % 4;
		int b = r % 100;
		if (a == 0 && b != 0)
			printf("%d ", r);
	}
	return 0;
}