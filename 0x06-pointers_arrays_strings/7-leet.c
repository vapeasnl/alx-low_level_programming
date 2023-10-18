#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: input value
 * Return: str value
 */
char *leet(char *str)
{
	int a, b;
	char ch1[] = "aAeEoOtTlL";
	char ch2[] = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (str[a] == ch1[b])
			{
				str[a] = ch2[b];
			}
		}
	}
	return (str);
}
