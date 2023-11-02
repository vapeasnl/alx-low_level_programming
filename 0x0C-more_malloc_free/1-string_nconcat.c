#include "main.h"
/**
* string_nconcat - a function that concatenates two strings
* @s1: char number 1
* @s2: char number 2
* @n: unsigned int
* Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b, c;
char *ch;
if (s1 == NULL)
{
a = 0;
}
else
{
for (a = 0; s1[a]; ++a)
;
}
if (s2 == NULL)
{
b = 0;
}
else
{
for (b = 0; s2[b]; ++b)
;
}
if (b > n)
b = n;
ch = malloc(sizeof(char) * (a + b + 1));
if (ch == NULL)
return (NULL);
for (c = 0; c < a; c++)
ch[c] = s1[c];
for (c = 0; c < b; c++)
ch[c + a] = s2[c];
ch[a + b] = '\0';
return (ch);
}
