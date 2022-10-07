#include "main.h"
/**
 * print_most_numbers - Entry point
 * Return: 0 (Success)
 */
void print_most_numbers(void)
{
int number = 48;
while (number < 58)
{
if (number == 50 || number == 52)
{
number++;
continue;
}
else
{
_putchar(number);
number++;
}
}
_putchar('\n');
}
