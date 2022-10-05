#include "main.h"
/**
 * jack_bauer - Entry point
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
int dh = '0';
int h = '0';
int dm = '0';
int m = '0';
while (dh != '2' || h != '4')
{
_putchar(dh);
_putchar(h);
_putchar(':');
_putchar(dm);
_putchar(m);
_putchar('\n');
if (h == '9' && dm == '5' && m == '9')
{
dh = dh + 1;
h = '0';
dm = '0';
m = '0';
}
else if (dm == '5' && m == '9')
{
h = h + 1;
dm = '0';
m = '0';
}
else if (m == '9')
{
dm = dm + 1;
m = '0';
}
else
{
m = m + 1;
}
}
}
