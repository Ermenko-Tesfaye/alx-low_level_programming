#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: a pointer to destination data structure
 * @src: apointer to source memory location
 * @n: function copies n bytes from memory
 * Return: pointer to desttination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (!(src + i) || !(dest + i))
			break;
		*(dest + i) = *(src + i);
	}
	return (dest);
}
