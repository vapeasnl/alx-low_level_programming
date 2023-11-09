#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - a function that prints numbers,
* followed by a new line.
* @separator: the string between number
* @n: The number of integers
* @...: number of numbers to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int head;
va_start(num, n);
for (head = 0; head < n; head++)
{
printf("%d", va_arg(num, int));
if (head != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(num);
}
