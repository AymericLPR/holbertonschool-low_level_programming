#include "main.h"
/**
 * print_to_98 - Entry point
 * Return: 0 (Success)
 * @n: n to 98
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n != 99)
{
if (n <= 9)
{
_putchar(n);
}
else
{
_putchar(n / 10);
_putchar(n % 10);
}
_putchar(',');
_putchar(' ');
n++;
}
}
else if (n > 98)
{
while (n != 97)
{
if (n >=100)
{
_putchar(n / 100);
_putchar(n / 10);
_putchar(n % 10);
}
else
{
_putchar(n / 10);
_putchar(n % 10);
}
_putchar(',');
_putchar(' ');
n--;
}
}
else
{
_putchar('9');
_putchar('8');
}
_putchar('\n');
}
