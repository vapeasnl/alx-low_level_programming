#include <stdio.h>
#include "main.h"
/**
* main - a program that prints the number
* of arguments passed into it
* @argc: number of arg
* @argv: array of arg
* Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
