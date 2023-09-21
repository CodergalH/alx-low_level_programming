#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - change value of variable to 98
 *
 */

void reset_to_98(int *n)
{
int i = 98;
int *p = &i;

*n = *p;
}
