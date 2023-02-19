#include <stdio.h>

/**
 * main - i sometimes suffer from insomnia
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
	if (l == 'q' || l == 'e')
	{
	continue;  /* skip q and e */
	}
	putchar(l);
	}
	putchar('\n');

	return (0);
}
