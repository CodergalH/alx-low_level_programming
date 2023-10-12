#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize struct dog
 *
 * @d: struct
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
