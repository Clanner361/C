#include <stdio.h>

int main (void)
{
	int a[2][3] = {{11, 12, 13}, {21, 22, 23}};
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("%d ", a[i][j]);
		}
		printf ("\n");
	}

	return 0;
}
