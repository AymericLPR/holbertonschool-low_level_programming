#include "main.h"

/**
 * get_bit - get the bit at index
 * @n: number
 * @index: index
 * Return: Alawys 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
int x = 0;

if (index > 65)
return (-1);
n = n >> index;
if ((n & 1) == 1)
{
x = 1;
}
return (x);
}
