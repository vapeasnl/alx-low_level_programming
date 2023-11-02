#include <stdio.h>
#include "main.h"
/**
* main - multiply two numbers
* @argc: number of arguments
* @argv: argument vector
* Return: NULL, or exit status of 98 if failure
*/
int main(int argc, char *argv[])
{
int s1, s2, sn, tx, x;
char *a;
char *t;
char e[] = "Error\n";
if (argc != 3 || check_fordigits(argv))
{
for (tx = 0; e[tx]; tx++)
_putchar(e[tx]);
exit(98);
}
for (s1 = 0; argv[1][s1]; s1++)
;
for (s2 = 0; argv[2][s2]; s2++)
;
sn = s1 + s2 + 1;
a = malloc(sn * sizeof(char));
if (a == NULL)
{
for (tx = 0; e[tx]; tx++)
_putchar(e[tx]);
exit(98);
}
initializes(a, sn - 1);
for (tx = s2 - 1, x = 0; tx >= 0; tx--, x++)
{
t = mul(argv[2][tx], argv[1], s1 - 1, a, (sn - 2) - x);
if (t == NULL)
{
for (tx = 0; e[tx]; tx++)
_putchar(e[tx]);
free(a);
exit(98);
}
}
_move_andprint(a, sn - 1);
return (0);
}
