#include <stdlib.h>

/**
 *_strdup - Entry point
 *@str: string
 *Return: Always 0.
 */

char *_strdup(char *str)
{
int i, siz;
char *z;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
}
siz = i;
z = malloc((siz * sizeof(char) + 1));
if (z == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
z[i] = str[i];
}
return (z);
}
