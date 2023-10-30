#include "main.h"
#include <stdlib.h>
/**
* create_array - a function that creates an array of chars
* and initializes it with a specific char
* @size: size of array
* @c: char to assign
* Return: pointer to array, NULL if fail
*/
char *create_array(unsigned int size, char c)
{
char *ch;
unsigned int x;
ch = malloc(sizeof(char) * size);
if (size == 0 || ch == NULL)
return (NULL);
for (x = 0; x < size; x++)
ch[x] = c;
return (ch);
}
