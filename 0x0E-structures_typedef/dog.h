#ifndef DOG_H
#define DOG_H
/**
* struct dog - dog information
* @name: First information
* @age: Second information
* @owner: Third information
* Description: Longer description
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
* dog_inf - typedef for struct dog
*/
typedef struct dog dog_inf;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
