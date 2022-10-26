#include <stdlib.h>
#include "main.h"

/**
 *array_range - Entry point
 *@min: minimum
 *@max: maximum
 *Return: Always 0.
 */

int *array_range(int min, int max)
{
int *c;
int i = min, x = 0;

if (min > max)
return (NULL);
c = malloc(sizeof(int) * (max - min + 1));
if (c == NULL)
return (NULL);
while (i <= max)
{
c[x] = i;
i++, x++;
}
return (c);
}
