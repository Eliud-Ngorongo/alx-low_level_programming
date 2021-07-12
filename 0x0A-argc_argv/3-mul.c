#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the arguments it receives
 * @argc: counts all arguments passed into main
 * @argv: stores all arguments passed into main
 *
 * Return: an interger 0 for success 1 for failure
 */

int main(int argc, char *argv[])
{
int i = argc - 1;
if (i != 2)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[i]) * atoi(argv[i - 1]));
return (0);
}
}

