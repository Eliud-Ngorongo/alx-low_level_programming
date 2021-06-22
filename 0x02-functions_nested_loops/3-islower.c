#include "holberton.h"
/**
 *  _islower - checks for lowercase character
 *@c:the character to check
 *Return 0 or 1
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);

}
