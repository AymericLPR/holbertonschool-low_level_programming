#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
int n = 2;
printfx("1");

while ( n < 101)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
printf(" FizzBuzz");
}
else if (n % 3 == 0)
{
printf(" Fizz");
}
else if (n % 5 == 0)
{
printf(" Buzz");
}
else
{
printf(" %d", n);
}
n++;
}
printf("\n");
return (0);
}
