#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: number
 * Return: none
 */
void print_square(int size)
{
int x;
int j;

if (size <= 0)
_putchar('\n');
else
{
for (x = 0; x < size; x++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
