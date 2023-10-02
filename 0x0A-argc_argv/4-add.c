#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - add numbers passed as arguement
 *
 * @argc: no of arguement
 * @argv: pointer to array of pointer to arguement string
 * Return: (0) success (1) failed
 */

int main(int argc, char *argv[])
{
int mul;

if (argc > 1)
{
int count;

for (count = 1, mul = 0; count < argc; count++)
{
if ( *argv[count] < '0' || *argv[count] > '9' )
{
printf("Error\n");
return (1);
}
else
{
mul += atoi(argv[count]);
}
}
printf("%d\n", mul);
}
else
{
printf("%d\n", 0);
}

return (0);
}
