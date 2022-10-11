#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: array
 * @n: number
 * Return: Always 0
 */

void print_array(int *a, int n)
{
int i;
i = 0;

while (i < n)
{
if (i < n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
_putchar('\n');
}
