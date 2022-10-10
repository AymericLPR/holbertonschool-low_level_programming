#include "main.h"

/**
 * _puts - Entry point
 * @str: charater
 * Return: Always 0
 */

void _puts(char *str)
{
int x;
x = 0;
while (str[x] != '\0')
{
x++;
}
_putchar(str);
_putchar('\n');
}
