#include <stdio.h>
#include "main.h"

void reset_to_98(int *n)
{
int i = 98;
int *p = &i;

*n = *p;
}
