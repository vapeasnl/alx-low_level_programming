#include "main.h"


/**
* _realloc - a function that reallocates a memory block using malloc and free
* @ptr: is a pointer to the memory previously allocated
* @old_size: is the size, in bytes, of the allocated space for ptr
* @new_size: is the new size, in bytes of the new memory block
* Return: pointer allocate new size memory, or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a;
unsigned int x, new = new_size;
char *old = ptr;
if (ptr == NULL)
{
a = malloc(new_size);
return (a);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
a = malloc(new_size);
if (a == NULL)
return (NULL);
if (new_size > old_size)
new = old_size;
for (x = 0; x < new; x++)
a[x] = old[x];
free(ptr);
return (a);
}
