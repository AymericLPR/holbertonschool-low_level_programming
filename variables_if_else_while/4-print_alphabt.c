#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int alpha = 97;
while (alpha < 123)
{
if (alpha > 96 && alpha < 100)
{
putchar(alpha);
alpha++;
}
if (alpha == 100)
alpha = 102
if (alpha > 101 && alpha < 111)
{
putchar(alpha);
alpha++;
}
if (alpha == 111)
alpha = 113
if (alpha > 112)
{
putchar(alpha);
alpha++;
}
}
putchar('\n');
return (0);
}
