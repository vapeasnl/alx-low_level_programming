#include "main.h"
/**
* _move_andprint - moves a string one place to the left and prints the string
* @ch: string to move
* @size: size of string
* Return: void
*/
void _move_andprint(char *ch, int size)
{
int a, b;
a = b = 0;
while (a < size)
{
if (ch[a] != '0')
b = 1;
if (b || a == size - 1)
_putchar(ch[a]);
a++;
}
_putchar('\n');
free(ch);
}
/**
* mul - multiplies a char with a string and places the answer into dest
* @n: char to multiply
* @num: string to multiply
* @num_index: last non NULL index of num
* @dest: destination of multiplication
* @dest_index: highest index to start addition
*
* Return: pointer to dest, or NULL on failure
*/
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
int a, b, mul, mulrem, sum, sumrem;
mulrem = sumrem = 0;
for (a = num_index, b = dest_index; a >= 0; a--, b--)
{
mul = (n - '0') * (num[a] - '0') + mulrem;
mulrem = mul / 10;
sum = (dest[b] - '0') + (mul % 10) + sumrem;
sumrem = sum / 10;
dest[b] = sum % 10 + '0';
}
for (sumrem += mulrem; b >= 0 && sumrem; b--)
{
sum = (dest[b] - '0') + sumrem;
sumrem = sum / 10;
dest[b] = sum % 10 + '0';
}
if (sumrem)
{
return (NULL);
}
return (dest);
}
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
/**
* initializes - initializes a string
* @ch: sting to initialize
* @length: length of strinf
* Return: void
*/
void initializes(char *ch, int length)
{
int a;
for (a = 0; a < length; a++)
ch[a] = '0';
ch[a] = '\0';
}
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
