#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 48;
while (number < 58)
{
putchar(number);
if (number != 57)
{
putchar(',');
putchar(' ');
number++;
}
else
{
number++;
}
}
putchar('\n');
return (0);
}
