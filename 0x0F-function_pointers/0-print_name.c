#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name.
 * @name: type string to add
 * @f: pointer
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
