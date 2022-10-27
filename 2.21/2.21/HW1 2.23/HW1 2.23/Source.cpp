#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int num[3];
	int i, j, t;

	scanf("%d%d%d", &num[0], &num[1], &num[2]);


	for (t = 1; t > 0; t--)
	{
		for (i = 0; i <= t; i++)
		{
			if (num[i] > num[i + 1])
			{
				j = num[i];
				num[i] = num[i + 1];
				num[i + 1] = j;
			}
		}
	}
	if (num[1] < num[0])
	{
		j = num[1];
		num[1] = num[0];
		num[0] = j;
	}
	printf("largest¡G%d smallest¡G%d\n", num[2], num[0]);
	system("pause");
	return 0;
}