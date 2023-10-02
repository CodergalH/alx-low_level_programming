#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply two numbers and print value
 *
 * @argc: no of arguement
 * @argv: pointer to array of pointer to arguement string
 * Return: (0) success (1) failed
 */

int main(int argc, char *argv[])
{
int i, j, mul;

if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
mul = i *j;

printf("%d\n", mul);
}
else
{
printf("Error\n");

return (1);
}

return (0);
}
