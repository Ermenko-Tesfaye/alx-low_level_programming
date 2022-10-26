#include "main.h"
/**
 * _strcmp - a fun.. that compare two string
 * @s1: string one
 * @s2: string two
 * Return: Less than 0. if s1 < s2
 * Greter than 0. if s1 > s2
 * Equal to 0. if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (s2[i] != '\0')
		return (s1[i] - s2[i]);
	else
		return (0);
}
