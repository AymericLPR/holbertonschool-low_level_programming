#include "main.h"
/**
 * times_table - Entry point
 * Return: 0 (Success)
 */
void times_table(void)
{
int x = '0';
int y = '0';
int z;

while (y != '9' && x != '9')
{
if (x != '9')
{
z = x * y;  
_putchar(z);
_putchar(',');
_putchar(' ');
x = x + 1;
}
else
{
z = x *y;
_putchar(z);
_putchar('\n');
x = '0';
y = y + 1;
}
}
}
