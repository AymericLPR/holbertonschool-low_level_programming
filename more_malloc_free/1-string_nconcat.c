#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - Entry point
 *@s1: first string
 *@s2: second string
 *@n: number
 *Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
char *c;
unsigned int i = 0, x = 0, y = 0, z = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
++i;
while (s2[x] != '\0')
++x;
if (n > x)
n = x;
else
x = n;
c = malloc(sizeof(char) * ((i + x) +1));
if (c == NULL)
return (NULL);
while (y < i)
{
c[y] = s1[y];
y++;
}
while (z < (x + 1))
{
c[y] = s2[z];
y++, ++z;
}
return (c);
}
