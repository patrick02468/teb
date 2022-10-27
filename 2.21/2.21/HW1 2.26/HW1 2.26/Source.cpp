#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (b % a == 0)
	{
		printf("yes\n");
	}
	if (b % a != 0)
	{
		printf("no\n");
	}
}