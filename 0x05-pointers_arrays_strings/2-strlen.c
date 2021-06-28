#include "holberton.h"
/**
 *_strlen - prints the length of a string
 * @*s: char being counted
 * @Return: length of string
 */
int _strlrn(char *s)
{
int i = 0;
while (*(s+i))
i++;
return (i);
}
