#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 no error
 * in ascii a = 97 and z = 122
 * A = 65 and Z = 90
 */
int main(void)
{
int alpha = 97;
while (alpha != 91)
{
if (alpha > 97 && alpha < 123)
{
putchar(alpha);
alpha++;
}
if (alpha == 123)
alpha = 65;
if (alpha > 64 && alpha < 91)
{
putchar(alpha);
alpha++;
}
if (alpha == 91)
{
putchar('\n');
}
}
return(0);
}
