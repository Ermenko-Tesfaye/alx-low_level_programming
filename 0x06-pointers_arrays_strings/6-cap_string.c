#include "main.h"
/**
 * cap_string - a fun.. that capitalize all words of a string
 * @str: string to be capitalize
 * Return: pointer to the capitalize string
 */
char *cap_string(char *str)
{
	int i, j, check;
	char sep[] = "',', ';', '.', '!', '?', '\"', '(', ')', '{', '}', '\n', '\t'";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				check = i + 1;
				if (str[check] > 96 && str[check] < 123)
					str[check] -= 32;
			}
		}
	}
	return (str);
}
