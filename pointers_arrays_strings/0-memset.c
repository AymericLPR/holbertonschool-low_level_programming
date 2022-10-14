#include "main.h"

/**
 * swap_int - Entry point
 * @a: character
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
