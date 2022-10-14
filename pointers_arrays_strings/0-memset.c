#include "main.h"

/**
 * *_memset - Entry point
 * @b: character
 * @n: number
 * @s: pointer
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
