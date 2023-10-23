#include "main.h"
/**
* _memset - a function that fills memory with a constant byte
* @b: the constant byte
* @s:  the pointer to the memory area
* @n: the first bytes
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
s[x] = b;
return (s);
}
