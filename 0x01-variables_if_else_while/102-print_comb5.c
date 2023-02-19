#include <stdio.h>

/**
 * main - advanced
 *
 * Return: Always 0.
 */
int main(void)
{
int n, m;

for (n = 0; n <= 98; n++)
{
for (m = n + 1; m <= 99; m++)
{
printf("%02d %02d", n, m);
if (n != 98 || m != 99)
printf(", ");
}
}
printf("\n");

return (0);
}
