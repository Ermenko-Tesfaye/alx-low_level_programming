#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: parent string
 * @needle: string to be checked in haystack
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(haystack + i); i++)
	{
		if (*(needle) == *(haystack + i))
		{
			for (j = 0; *(needle + j); j++)
			{
				if (*(needle + j) != *(haystack + i + j))
					return (0);
			}
			return (haystack + i);
		}
	}
	return (0);
}
