#include "main.h"

/**
 * puts_half - Entry point
 * @str: charater
 * Return: Always 0
 */

void puts_half(char *str)
{
int i;
int n;
int x;

i = 0;
while (str[i] != '\0')
{
i++;
}
n = i;
if ((i % 2) == 0)
{
x = (i / 2);
}
else
{
x = ((i / 2) + 1);
}
i = x;
while (i != n)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
