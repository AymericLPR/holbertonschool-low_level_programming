#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int num = 0;
int alpha = 97;
while (num < 10)
{
if (alpha == 123)
alpha = 97;
while (alpha < 123)
{
_putchar(alpha);
alpha++;
}
num++;
}
_putchar('\n');
}
