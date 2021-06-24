#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: number of times \ will print on the screen
 *
 *Return -void
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('\\');
}
_putchar('\n');
}
}
