#include "main.h"
/**
 * times_table - Entry point
 * Return: 0 (Success)
 */
void times_table(void)
{
int x = 48;
int y = 48;
int z;

while (y != 57 || x != 57)
{
if (x != 57)
{
z = x *y;  
_putchar(z);
_putchar(',');
_putchar(' ');
x++;
}
else
{
z = x *y;
_putchar(z);
_putchar('\n');
x = 57;
y++;
}
}
}
