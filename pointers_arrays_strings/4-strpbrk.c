#include "main.h"

/**
 * *_strpbrk - Entry point
 * @s : string
 * @accept : string
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
int i;
int n;
for (i = 0; s[i]; i++)
{
for (n = 0; accept[n]; n++)
{
if (s[i] == accept[n])
{
return (s + i);
}
}
}
return (0);
}
