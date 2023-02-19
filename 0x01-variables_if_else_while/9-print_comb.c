#include <stdio.h>

/**
 * main - i sometimes suffer from insomnia
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
	int digit;
	int divide;

	divide = 1;
	while (number / divide >= 10)
	{
	divide *= 10;
	}
	while (divide > 0)
	{
	digit = (number / divide) % 10;
	putchar('0' + digit);
	if (divide > 9)
	{
	}
	divide /= 10;
	}
	if (number < 9)
	{
	putchar(',');
	putchar(' ');
	}
	else
	{
	putchar('\n');
	}
}
	return (0);
}
