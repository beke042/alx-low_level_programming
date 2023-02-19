#include <stdio.h>

/**
 * main - i sometimes suffer from insomnia
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;
	char A;

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
	divide /= 10;
	}
	}
	for (A = 'a'; A <= 'f'; A++)
	{
	putchar(A);
	}
	putchar('\n');
	return (0);
}
