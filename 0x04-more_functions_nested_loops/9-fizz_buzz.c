#include <stdio.h>
/**
* main - prints Fizz for int divisible by 3 and Buzz for 5
*
* Return: int
*/
int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz ");
}
else if (i % 3 != 0 && i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else
printf("%d ", i);
}
printf("\n");
return (0);
}
