#include "main.h"
/**
* get_endianness - a function that checks the endianness.
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
int i;
char *j;
i = 1;
j = (char *)&i;
return (*j);
}
