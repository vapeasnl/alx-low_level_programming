#include "hash_tables.h"

/**
* hash_djb2 - function implementing the djb2 algorithm
* @str: The string to hash.
* Return: The hash calculated.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int h;
int c;
h = 5381;
while ((c = *str++))
h = ((h << 5) + h) + c;
return (h);
}
