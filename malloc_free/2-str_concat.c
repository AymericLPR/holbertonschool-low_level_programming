#include <stdlib.h>
/**
 *str_concat - function that concatenate 2 strings using malloc
 *@s1: first string
 *@s2: second string
 *Return: the pointer to the 2 strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
char *c;
int i = 0, x = 0, y = 0, z = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
++i;
}
while (s2[x] != '\0')
{
++x;
}
z = malloc(sizeof(char) * (i + x) + 1);
if (c == NULL)
return (NULL);
while (y < i)
{
c[y] = s1[y];
y++;
}
while (z < x)
{
c[y] = s2[z];
y++;
z++;
}
return (c);
}
