#include "main.h"
/**
 * print_sign - Entry point
 * Return: 0 (Success)
 * @n: variable not a letter
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('+');
return (1);
}
}
