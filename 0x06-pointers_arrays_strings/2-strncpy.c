#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: destination of a string
 * @src: source of a string
 * @n: upto nth index from src
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
		dest[j++] = '\0';
	return (dest);
}
