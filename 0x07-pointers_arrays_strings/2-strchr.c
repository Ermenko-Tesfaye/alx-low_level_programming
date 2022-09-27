#include "main.h"
/**
 * _strchr - a function that locates a char in a string
 * @s: string value
 * @c: the char to check first occurance
 * Return: a pointer to the first occurance of char c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
