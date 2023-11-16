#include <stdio.h>
void goal(void) __attribute__ ((constructor));
/**
* goal - a function that prints a text
* function is executed
*/
void goal(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
