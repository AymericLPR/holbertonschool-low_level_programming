#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 48;
while ((number > 47 && number < 58) || (number > 96 && number < 103))
{
putchar(number);
number++;
if (number == 58)
number = 97;
}
putchar('\n');
return (0);
}
