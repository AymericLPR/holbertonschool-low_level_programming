#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 48;
while (number < 57)
{
putchar(number);
putchar(',');
putchar(' ');
number++;
}
if (number ==57)
{
putchar(number, '\n');
}
return (0);
}
