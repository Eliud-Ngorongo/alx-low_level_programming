#include "holberton.h"
/**
 *print_most_numbers - prints all numbers except 2 and 4
 *
 *Return: void
 */
void print_most_numbers(void)
{
int i = 0;
char s;
char c[] = "01356789\n";
while (i < 9)
{
s = c[i];
_putchar(c);
i++;
}
}
