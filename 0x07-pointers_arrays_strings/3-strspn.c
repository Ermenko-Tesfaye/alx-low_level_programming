#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: first string
 * @accept: second string
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int flag, j, i = 0;

	while (s[i])
	{
		flag = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				flag = 1;
		}
		if (flag == 0)
			return (i);
		i++;
	}
	return (0);
}
