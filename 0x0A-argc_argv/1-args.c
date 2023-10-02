#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - print no of arguement
 *
 * @argc: no of argument
 * @argv: pointer to array of pointer to string
 * Return : (0) Success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

if (argc > 0)
{
printf("%d\n", argc - 1);
}
else
{
printf("%d\n", argc);
}

return (0);
}
