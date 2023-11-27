#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buf(char *file);
void close_file(int fd);
/**
* create_buf - Allocates 1024 bytes
* @file: The name of the file buffer
* Return: the newly-allocated buffer.
*/
char *create_buf(char *file)
{
char *buff;
buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buff);
}
/**
* close_file - Closes file
* @fd: The file descriptor
*/
void close_file(int fd)
{
int a;
a = close(fd);
if (a == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments
* @argv: An array of pointers
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
int from, to, a, b;
char *buff;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = create_buf(argv[2]);
from = open(argv[1], O_RDONLY);
a = read(from, buff, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || a == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
b = write(to, buff, a);
if (to == -1 || b == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}
a = read(from, buff, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (a > 0);
free(buff);
close_file(from);
close_file(to);
return (0);
}

