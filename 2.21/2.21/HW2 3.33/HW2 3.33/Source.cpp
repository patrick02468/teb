#include<stdio.h>

int main()
{
	for (int i = 1; i <= 12; ++i)
	{
		printf("*");
	}
	printf("\n");
	for (int i = 1; i <= 1; ++i)
	{
		printf("*");
		for (int j = 1; j <= 10; j++)
		{
			printf(" ");
		}
	}
	printf("*");
	printf("\n");
	for (int i = 1; i <= 12; ++i)
	{
		printf("*");
	}
}