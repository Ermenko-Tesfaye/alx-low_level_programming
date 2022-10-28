#include "main.h"
#include <stdlib.h>
/**
 * create_array - a fun.. creates array of chars, init. it with a specific char
 * @size: size of an array
 * @c: constant char to be filed in each index
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
