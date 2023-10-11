#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * init_dog - Initialize struct dog
 *
 * @d: struct
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 * Return: struct d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

d = malloc(typeof(struct dog));

if (d == NULL)
return (NULL);

d->name = name;
d->age = age;
d->owner = owner;

return (d);
}
