#include "main.h"

/**
 * _strlen - Entry point
 * @s: charater
 * Return: Always 0
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * rev_string - Entry point
 * @s: number 
 * Return: Always 0
 */

void rev_string(char *s)
{
int x;
int n;
x = 0;
 n = (_strlen(s) - x);

while (n != 0)
{
x++;
_putchar(s[n]);
}
}
