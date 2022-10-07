#include "main.h"
/**
 * more_numbers - Entry point
 * Return: 0 (Success)
 */
void more_numbers(void)
{
int m = 0;
int n;
 
while (m < 10)
{
n = 0;
while (n < 15)
{
if (n > 9)
{
_putchar('1');
}
_putchar((n % 10) + '0');
n++;
}
_putchar('\n');
m++;
}
}
