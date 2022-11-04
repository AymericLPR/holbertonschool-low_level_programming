#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Entry point
 *@n: number
 *Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list aptr;

if (n == 0)
return (0);
va_start(aptr, n);
for (i = 0; i < n; i++)
sum += va_arg(aptr, int);
va_end(aptr);
return (sum);
}
