#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - print all arguement passed
 *
 * @argc: no of arguement
 * @argv: pointer to array of pointer
 * Return: (0) Success
 */

int main(int argc, char *argv[])
{
int count;

if (argc >= 1)
{
for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
}

return (0);
}
