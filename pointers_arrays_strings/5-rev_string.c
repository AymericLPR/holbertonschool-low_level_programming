#include "main.h"

/**
 * rev_string - Entry point
 * @s: number 
 * Return: Always 0
 */

void rev_string(char *s)
{
int i;
i = 0;

while (s[i] != '\0')
{
i++;
}

int x;
int n;
x = 0;
n = (i - x);

while (n != 0)
{
x++;
_putchar(s[n]);
}
}
