#include <stdlib.h>
#include "dog.h"
/**
* _stringlenght - returns the length of a string
* @ch: string to evaluate
* Return: the length of the string
*/
int _stringlenght(char *ch)
{
int x;
x = 0;
while (ch[x] != '\0')
{
x++;
}
return (x);
}
/**
* *_strcpy - copies the string pointed to by src
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int l, i;
l = 0;
while (src[l] != '\0')
{
l++;
}
for (i = 0; i < l; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
* new_dog - creates information for a new dog
* @name: name of the new dog
* @age: age of the new dog
* @owner: owner of new the dog
* Return: pointer to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int l1, l2;
l1 = _stringlenght(name);
l2 = _stringlenght(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (l1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (l2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
