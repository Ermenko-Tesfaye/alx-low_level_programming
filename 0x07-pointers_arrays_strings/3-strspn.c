#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: first string
 * @accept: second string
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s)
	{
		if (*(s + i) == accept[0])
			break;
		i++;
	}
	if (i > 0)
		i++;
	return (i);
}
