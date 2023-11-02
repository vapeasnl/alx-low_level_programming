#include "main.h"
/**
* check_fordigits - checks the arguments to ensure they are digits
* @pav: pointer to arguments
* Return: 0 if digits, 1 if not
*/
int check_fordigits(char **pav)
{
int a, b;
for (a = 1; a < 3; a++)
{
for (b = 0; pav[a][b]; b++)
{
if (pav[a][b] < '0' || pav[a][b] > '9')
return (1);
}
}
return (0);
}
