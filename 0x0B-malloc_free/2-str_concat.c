#include "main.h"
#include <stdlib.h>
/**
* str_concat - a function that concatenates two strings
* @s1: contents 1
* @s2: contents 2
* Return: contents of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *chain;
int x, cx;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
x = cx = 0;
while (s1[x] != '\0')
x++;
while (s2[ci] != '\0')
cx++;
chain = malloc(sizeof(char) * (x + cx + 1));
if (chain == NULL)
return (NULL);
x = cx = 0;
while (s1[x] != '\0')
{
chain[x] = s1[x];
x++;
}
while (s2[cx] != '\0')
{
chain[x] = s2[cx];
x++, cx++;
}
chain[x] = '\0';
return (chain);
}
