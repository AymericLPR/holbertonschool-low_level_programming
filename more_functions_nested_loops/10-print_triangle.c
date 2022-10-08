#include "main.h"
/**
 * print_triangle - Entry point
 * @size: number
 * Return: none
 */
void print_triangle(int size)
{
int n;
int m;
int x = size;

if (size <= 0)
_putchar('\n');
for (n = 1; n <= size; n++)
{
for (m = 1; m <= size; m++)
{
if (m >= x)
_putchar(35);
else
_putchar(' ');
}
_putchar('\n');
x--;
}
}
