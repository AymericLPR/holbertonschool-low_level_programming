#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int alpha = 97;
while (alpha < 123)
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
