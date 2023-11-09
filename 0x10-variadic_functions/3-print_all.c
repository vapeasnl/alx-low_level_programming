#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - a function that prints anything.
* @format: is a list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
int x = 0;
char *ch, *s = "";
va_list ls;
va_start(ls, format);
if (format)
{
while (format[x])
{
switch (format[x])
{
case 'c':
printf("%s%c", s, va_arg(ls, int));
break;
case 'i':
printf("%s%d", s, va_arg(ls, int));
break;
case 'f':
printf("%s%f", s, va_arg(ls, double));
break;
case 's':
ch = va_arg(ls, char *);
if (!ch)
ch = "(nil)";
printf("%s%s", s, ch);
break;
default:
x++;
continue;
}
s = ", ";
x++;
}
}
printf("\n");
va_end(ls);
}



