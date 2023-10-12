#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print elements of struct
 *
 * @d: struct
 */

void print_dog(struct dog *d)
{

if (d == NULL)
return;

if ((*d).name != NULL)
printf("Name: %s\n", (*d).name);
else
printf("Name: (nil)");

if ((*d).age > 0)
printf("Age: %f\n", (*d).age);
else
printf("Age: (nil)");

if ((*d).owner == NULL)
printf("Owner: (nil)");
else
printf("Owner: %s\n", (*d).owner);

}
