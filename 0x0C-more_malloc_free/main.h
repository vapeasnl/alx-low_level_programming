#ifndef MAIN_H
#define MAIN_H

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
int _putchar(char c);
void _move_andprint(char *ch, int size);
void initializes(char *ch, int length);
int main(int argc, char *argv[]);
int check_fordigits(char **pav);
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _move_andprint(char *ch, int size);
void initializes(char *ch, int length);
int main(int argc, char *argv[]);
int check_fordigits(char **pav);
#endif
