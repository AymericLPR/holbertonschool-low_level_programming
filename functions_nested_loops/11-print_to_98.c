#include "main.h"
/**
 * print_to_98 - Entry point
 * Return: 0 (Success)
 * @n: n 
 */
void print_to_98(int n)
{
int n;

if (n < 98)
{
while (n != 99)
{
_putchar(n);
_putchar(',');
_putchar(' ');
n++;
}
}
else if (n > 98)
{
while (n != 97)
{
_putchar(n);
_putchar(',');
_putchar(' ');
n--;
}
}
else
{
_putchar('9')
_putchar('8')
}
}
