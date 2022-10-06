#include "main.h"
/**
 * print_last_digit - Entry point
 * Return: 0 (Success)
 * @ld: last digit
 */
int print_last_digit(int ld)
{
int n;
int n2;

if (ld > 0)
{
n = (ld % 10);
n2 = n + '0';
_putchar(n);
return (n);
}
else if (ld < 0)
{
n = ((ld % -10) * -1);
n2 = n + '0';
_putchar(n2);
return (n);
}
else
{
_putchar('0');
return (0);
}
}
