#include "main.h"

/**
 * *_strspn - Entry point
 * @accept: pointer
 * @s: pointer
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
int n;

for (i = 0; s[i]; i++)
{
for (n = 0; accept[n]; n++)
{
if (s[i] == accept[n])
{
break;
}
}
if (accept[n] == '\0')
{
break;
}
}
return (i);
}
