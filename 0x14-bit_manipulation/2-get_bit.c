#include"main.h"
/**
* get_bit - a function that returns the value of a bit at a given index.
* @n: number to check
* @index: index
* Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int div, verif;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
div = 1 << index;
verif = n & div;
if (verif == div)
return (1);
return (0);
}
