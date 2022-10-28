#include "main.h"
#include <stdlib.h>
/**
 * _strlen - count chars on a string
 * @str: string to be counted
 * Return: number of chars
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to newely allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int len = _strlen(s1);
	int i, j;
	char *ptr;

	len += _strlen(s2);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		ptr[i] = s1[i];
	for (j = 0; j < _strlen(s2); j++)
		ptr[i++] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
