#include "main.h"
/**
 * _strlen - string length
 * @b: string
 * Return: num of character
 */
unsigned int _strlen(const char *b)
{
	unsigned int i = 0;

	while (b[i])
		i++;
	return (i);
}
/**
 * binary_to_uint - a fun.. that converts a binary number to an uni_int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, base = 1, i;

	if (!b)
		return (0);
	i = _strlen(b);
	while (i)
	{
		i--;
		if (b[i] == 48 || b[i] == 49)
		{
			num += (base * (b[i] - 48));
			base *= 2;
		}
		else
			return (0);
	}
	return (num);
}
