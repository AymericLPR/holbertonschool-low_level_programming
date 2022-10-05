#include "main.h"
/**
 * print_to_98 - Entry point
 * Return: 0 (Success)
 * @n: n to 98
 */
void print_to_98(int n)
{
if ((n < 98) + '0')
{
while ((n != 99) +'0')
{
_putchar(n);
_putchar(',');
_putchar(' ');
n++;
}
}
else if ((n > 98) + '0')
{
while ((n != 97) + '0')
{
_putchar(n);
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
