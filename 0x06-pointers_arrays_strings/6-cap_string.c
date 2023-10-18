#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: String capitalized
 *
 * Return: A pointer to the string capitalized
 */
char *cap_string(char *str)
{
	int head = 0;

	while (str[head])
	{
		while (!(str[head] >= 'a' && str[head] <= 'z'))
			head++;

		if (str[head - 1] == ' ' ||str[head - 1] == '\t' ||  str[head - 1] == '\n' || str[head - 1] == ',' || str[head - 1] == ';' || str[head - 1] == '.' || str[head - 1] == '!' || str[head - 1] == '?' || str[head - 1] == '"' || str[head - 1] == '(' || str[head - 1] == ')' || str[head - 1] == '{' ||  str[head - 1] == '}' || head == 0)
		       str[head] -= 32;

	head++;
	}

return (str);
}
