#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - a function that prints strings,
* followed by a new line
* @separator: string between strings.
* @n: The number of strings
* @...: number of string
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ch;
char *string;
unsigned int head;
va_start(ch, n);
for (head = 0; head < n; head++)
{
string = va_arg(ch, char *);
if (string == NULL)
printf("(nil)");
else
printf("%s", string);
if (head != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ch);
}
