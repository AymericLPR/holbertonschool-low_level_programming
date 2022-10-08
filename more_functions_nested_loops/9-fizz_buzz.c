#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
void main(void)
{
int n = 1;
while ( n < 101)
{
if (x % 3 == 0)
{
printf(" Fizz");
}
else if (x % 5 == 0)
{
printf(" Buzz");
}
else if ((x % 3 == 0) && (x % 5 == 0))
{
printf(" FizzBuzz");
}
else
{
printf(" %d", x);
}
printf("\n");
return (0);
}
