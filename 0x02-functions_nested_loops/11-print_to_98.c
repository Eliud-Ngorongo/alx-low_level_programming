#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - prints from any interger to 98			,
 *followed by a new line
 *@n: print from this number
 *
 *Return:void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
