#include "main.h"
/**
 * _strcat - a fun.. that concatinate string
 * @dest: destination string
 * @src: source string
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	if (!(src))
		return (dest);
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}