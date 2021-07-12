#include <stdio.h>
/**
 * main - prints all the arguments it receives
 * @argc: counts all arguments passed into main
 * @argv: stores all arguments passed into main
 *
 * Return: an interger 0 for success
 */

int main(int argc, char *argv[])
{
int i;
for (i = 1; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
