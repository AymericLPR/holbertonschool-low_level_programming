#include <stdlib.h>

/**
 *_strdup - Entry point
 *@str: string
 *Return: Always 0.
 */

char *_strdup(char *str)
{
int i, size;
char *z;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
}
size = i;
z = malloc((sizeof(char) * size)+ 1);
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
