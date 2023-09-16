#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints numbers from 1 to 100
 * for multiples of 3 prints fizz
 * for multiples of 5 prints buzz
 * for multiples of 3 and 5 prints fizzbuzz
 *
 */

void fizz_buzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i == 100)
continue;
printf(" ");
}
printf("\n");
}
