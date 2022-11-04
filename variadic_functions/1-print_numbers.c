#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - Entry point
 *@n: number
 *@separator: string
 *Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int list = 0;
va_list aptr;

if (n == 0)
{
printf("\n");
return;
}
va_start(aptr, n);
for (i = 0; i < n; i++)
{
list = va_arg(aptr, int);
if (i == (n - 1))
printf("%d", list);
else if (separator == NULL)
printf("%d", list);
else
printf("%d%s", list, separator);
}
va_end(aptr);
printf("\n");
}
