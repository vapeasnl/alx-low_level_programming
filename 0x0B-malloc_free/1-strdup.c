#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - a function that returns a pointer to a newly allocated
* space in memory, which contains a copy
* of the string given as a parameter
* @str: string parameter
* Return: 0
*/
char *_strdup(char *str)
{
char *m;
int a, b = 0;
if (str == NULL)
return (NULL);
a = 0;
while (str[a] != '\0')
a++;
m = malloc(sizeof(char) * (a + 1));
if (m == NULL)
return (NULL);
for (b = 0; str[b]; b++)
m[b] = str[b];
return (m);
}
