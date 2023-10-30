#include <stdlib.h>
#include "main.h"
/**
* number_ofwords - calculated the number of words in a string
* @ch: string to evaluate
* Return: number of words
*/
int number_ofwords(char *ch)
{
int a, c, b;
a = 0;
b = 0;
for (c = 0; ch[c] != '\0'; c++)
{
if (ch[c] == ' ')
a = 0;
else if (a == 0)
{
a = 1;
b++;
}
}
return (b);
}
/**
* **strtow - a function that splits a string into words
* @str: string to split
* Return: a pointer to an array of strings (words) (Success)
* or NULL (Error)
*/
char **strtow(char *str)
{
char **mat, *tmp;
int x, v = 0, lenght = 0, words, y = 0, dbt, fn;
while (*(str + lenght))
lenght++;
words = number_ofwords(str);
if (words == 0)
return (NULL);
mat = (char **) malloc(sizeof(char *) * (words + 1));
if (mat == NULL)
return (NULL);
for (x = 0; x <= lenght; x++)
{
if (str[x] == ' ' || str[x] == '\0')
{
if (y)
{
fn = x;
tmp = (char *) malloc(sizeof(char) * (y + 1));
if (tmp == NULL)
return (NULL);
while (dbt < fn)
*tmp++ = str[dbt++];
*tmp = '\0';
mat[v] = tmp - y;
v++;
y = 0;
}
}
else if (y++ == 0)
dbt = x;
}
mat[v] = NULL;
return (mat);
}
