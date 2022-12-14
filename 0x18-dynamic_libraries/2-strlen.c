#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: string value
 * Return: number of characters
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
