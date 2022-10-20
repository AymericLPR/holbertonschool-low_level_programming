#include "main.h"

/**
 * prime_number_2 - Entry point
 * @n: number
 * @i: number
 * Return: Always 0
 */

int prime_number_2(int n, int i)
{
if (i == n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (prime_number_2(n, i + 1));
}

/**
 * is_prime_number - Entry point
 * @n: number
 * Return: Always 0
 */

int is_prime_number(int n)
{
if (n == 1)
{
return (0);
}
return (prime_number_2(n, 2));
}
