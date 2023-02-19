#include <stdio.h>

/**
 * main - advanced
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i, j, k, num_i, num_j, num_k;

	for (i = 0; i <= 7; i++)
	{
	for (j = i + 1; j <= 8; j++)
	{
	for (k = j + 1; k <= 9; k++)
	{
		num_i = i + '0';
		num_j = j + '0';
		num_k = k + '0';

	if (i != j && i != k && j != k)
	{
		putchar(num_i);
		putchar(num_j);
		putchar(num_k);
	if (i != 7 || j != 8 || k != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	}
		putchar('\n');
	return (0);
}
