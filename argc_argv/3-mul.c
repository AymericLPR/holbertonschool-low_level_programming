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
int a = argv[1];
int b = argv[2];

if (argc == 3)
{
i = a * b;
printf("%d\n", i);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
