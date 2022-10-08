#include "main.h"
/**
 * print_diagonal - Entry point
 * Return: 0 (Success)
 * @n: number
 */
void print_diagonal(int n)
{
int x;
int j;

if (n <= 0)
_putchar('\n');
else
{
for (x = 0; x != n; x++)
{
for (j = 1; j <= x; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
