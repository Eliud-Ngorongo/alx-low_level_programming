#include "holberton.h"
/**
 * print_line - prints a straight line
 * @n: number of times _ will print on the screen
 *
 *Return -void
 */
void print_line(int n)
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
_putchar('_');
}
_putchar('\n');
}
}
