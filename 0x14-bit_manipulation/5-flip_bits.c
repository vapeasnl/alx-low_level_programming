#include "main.h"
/**
* flip_bits - a function that returns the number of bits
* you would need to flip to get from one number to another.
* @n: first number
* @m: second number
* Return: the number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int actualy;
unsigned long int exc = n ^ m;
for (i = 63; i >= 0; i--)
{
actualy = exc >> i;
if (actualy & 1)
count++;
}
return (count);
}
