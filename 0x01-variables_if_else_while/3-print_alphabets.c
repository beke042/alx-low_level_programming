#include <stdio.h>

/**
 *main - alphABET
 *
 *Return: 0 (Success)
 */
int main(void)
{
	char l;
	char A;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
