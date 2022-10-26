#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Entry point
 * @b: b
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
int *i;

i = malloc(b);
if (i == NULL)
{
exit(98);
}
(void)i;
return (i);
}
