#include "main.h"
/**
 * print_most_numbers - Entry point
 * Return: 0 (Success)
 */
void print_most_numbers(void)
{
int alpha = 97;
while (alpha < 123)
{
if (alpha == 101 || alpha == 113)
{
alpha++;
continue;
}
else
{
putchar(alpha);
alpha++;
}
}
putchar('\n');
return (0);
}
