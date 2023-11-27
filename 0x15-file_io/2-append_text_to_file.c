#include "main.h"
/**
* append_text_to_file - a function that appends text at the end of a file
* @filename: is the name of the file
* @text_content: is the NULL terminated string to add
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int a, b, lenght = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (lenght = 0; text_content[lenght];)
lenght++;
}
a = open(filename, O_WRONLY | O_APPEND);
b = write(a, text_content, lenght);
if (a == -1 || b == -1)
return (-1);
close(a);
return (1);
}
