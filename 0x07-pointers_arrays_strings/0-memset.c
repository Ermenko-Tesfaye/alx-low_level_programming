#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointed char
 * @b: constant byte b
 * @n: size
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
}
