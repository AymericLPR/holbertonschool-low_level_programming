#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 * e = 101 and q = 113
 */
int main(void)
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
