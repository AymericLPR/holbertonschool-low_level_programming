#include "main.h"

/**
 * _isupper - Entry point
 * @c: character
 * Return: 1 if c is UPPERCASE, else 0
 */

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
