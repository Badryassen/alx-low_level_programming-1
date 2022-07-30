#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
**/

int main(void)
{
	long int i, j, k, l;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; i++)
	{
		if (i != 50)
		{
			printf("%d, ", j);
		}
		else
		{
			printf("%d\n", j);
		}

		l = j + k;
		j = k;
		k = l;
	}

	return (0);
}
