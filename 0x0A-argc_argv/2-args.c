#include <stdio.h>
#include "main.h"
/**
* main - a program that prints all arguments it receives
* @argc: number of arg
* @argv: array of arg
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
