#include "main.h"
/**
 * rot13 - a fun.. that encodes a string using rot13
 * @str: string to be encoded
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i = 0, j;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		j = 0;
		while (alp[j])
		{
			if (str[i] == alp[j])
			{
				str[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
