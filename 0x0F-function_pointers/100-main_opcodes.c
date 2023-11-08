#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the opcodes of its own main function.
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int nby, x;
char *ar;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
nby = atoi(argv[1]);
if (nby < 0)
{
printf("Error\n");
exit(2);
}
ar = (char *)main;
for (x = 0; x < nby; x++)
{
if (x == nby - 1)
{
printf("%02hhx\n", ar[x]);
break;
}
printf("%02hhx ", ar[x]);
}
return (0);
}
