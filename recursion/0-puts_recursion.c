#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: string
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_putchar(s + 1);
}
else
{
_putchar('\n');
}
}