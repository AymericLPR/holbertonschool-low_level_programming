#include "main.h"

/**
 * find_root - Entry point
 * @n: number
 * @i: number
 * Return: Always 0
 */

int find_root(int n, int i)
{
if (i * i == n)
{
return (i);
}
else
{
return (-1);
}
return (find_root(n, i + 1);
}
