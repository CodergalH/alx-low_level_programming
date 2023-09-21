#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap two intergers
 *@a: first interger
 *@b: second interger
 */

void swap_int(int *a, int *b)
{
int pnt = *a;
*a = *b;
*b = pnt;
 
}
