#include "main.h"
/**
* _memcpy - a function that copies memory area
* @src: Source area
* @dest: Destination area
* @n: Function parameter
* Return: Copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
