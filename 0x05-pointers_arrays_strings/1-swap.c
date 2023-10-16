#include "main.h"
/**
* swap_int - swaps the values of 2 integers
* @a: integer 1
* @b: integer 2
*/
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
