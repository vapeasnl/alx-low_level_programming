#include "main.h"
#include <stdlib.h>
/**
* argstostr - a function that concatenates all
* the arguments of your program
* @ac: int input
* @av: double pointer array
* Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
int a, b, c = 0, d = 0;
char *ch;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
d++;
}
d += ac;
ch = malloc(sizeof(char) * d + 1);
if (ch == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
ch[c] = av[a][b];
c++;
}
if (ch[c] == '\0')
{
ch[c++] = '\n';
}
}
return (ch);
}
