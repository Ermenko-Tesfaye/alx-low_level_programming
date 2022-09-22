#include "main.h"
/**
 * rot13 - a fun.. that encodes a string using rot13
 * @str: string to be encoded
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
			if (str[i] > 64 && str[i] < 91)
				str[i] = (((str[i] + 13) - 65) % 26) + 65;
			else if (str[i] > 96 && str[i] < 123)
				str[i] = (((str[i] + 13) - 97) % 26) + 97;
	}
	return (str);
}
