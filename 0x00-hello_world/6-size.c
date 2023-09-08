#include <stdio.h>

/**
 * Main - Entry point
 *
 * Printf - Prints strings
 *
 * Sizeof - Determine the size in bytes
 *
 * Return - Always 0 (Success)
 *
x * Return: The main function returns strings that contain
 * sizes of various types in bytes
 *
 */

int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
