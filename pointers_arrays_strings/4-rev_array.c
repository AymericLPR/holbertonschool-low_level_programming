#include "main.h"

/**
 * _strcmp - compares two given strings
 * @n: number
 * @a: number
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
int i;
int tmp;

for (i = 0; i < n / 2; i++)
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
}
