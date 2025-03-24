 #define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include<math.h>
int is_prime(int x)
{
	int i = 2;
	while (i <= sqrt(x) )
	{
		if (x % i == 0) return 0;
		i++;
	}
	return 1;
}

int main()
{
	int a = 0;
	int count = 0;
	for (a = 100;a <= 200;a++)
	{
		if (is_prime(a) == 1)
		{
			printf("%d  " , a);
			count++;
		}
	}
	printf("%d ", count);
	return 0;
}