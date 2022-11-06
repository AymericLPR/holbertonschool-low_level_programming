#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a - first number
 * @b - second number
 * Return : Always 0.
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtraction
 * @a - first number
 * @b - second number
 * Return : Always 0.
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - multiplication
 * @a - first number
 * @b - second number
 * Return : Always 0.
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - division
 * @a - first number
 * @b - second number
 * Return : Always 0.
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 *op_mod - modulo
 * @a - first number
 * @b - second number
 * Return : Always 0.
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
