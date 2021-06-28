#include "holberton.h"
/**
 *swap_int - swaps the value of int a and int b
 *@a: int to swap to b
 *@b: int to swap to a
 *Return: void
 */
void swap_int(int *a, int *b)
{

int x;
x = *a;
*a = *b;
*b = x;
}
