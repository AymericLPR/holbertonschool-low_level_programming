#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument
 * @argv: argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i;
if (argc == 3)
{
i = argv[1] * argv [2];
printf("%d\n", i);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
