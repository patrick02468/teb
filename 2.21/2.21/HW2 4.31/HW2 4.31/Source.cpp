#include<stdio.h>

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < (5-i); j++)
			printf(" ");
		for (int j = 0; j < (i*2-1); j++)
			printf("*");
		printf("\n");
	}
	for (int i = 4; i >=1; i--)
	{
		for (int j = 0; j < (5 - i); j++)
			printf(" ");
		for (int j = 0; j < (i * 2 - 1); j++)
			printf("*");
		printf("\n");
	}
}