#include "main.h"

/**
 * _natural_square - Entry point
 * @n: number
 * @i: number
 * Return: Always 0
 */

int _natural_square(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (_natural_square(n, i + 1));
}

/**
 * _sqrt_recursion - Entry point
 * @n: number
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
return (_natural_square(n, 1));
}
