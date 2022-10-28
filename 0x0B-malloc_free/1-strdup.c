#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a fun.. returns a pointer to a newly allocated space
 * @str: string to be copy
 * Return: pointer to newly created string
 */
char *_strdup(char *str)
{
	char *strdup;
	int i, j;

	if (!str)
		return (NULL);
	for (i = 0; str[i]; i++)
		i++;
	strdup = (char *)malloc(sizeof(char) * i + 1);
	if (!strdup)
		return (NULL);
	for (j = 0; j < i; j++)
		strdup[j] = str[j];
	strdup[j] = '\0';
	return (strdup);
}
