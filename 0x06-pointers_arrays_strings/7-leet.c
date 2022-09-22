#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: string value
 * Return:
 */
char *leet(char *str)
{
	int i, j;
	char cap[] = "AEOTL";
	char small[] = "aeotl";
	char num[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((str[i] == cap[j]) || (str[i] == small[j]))
				str[i] = num[j];
		}
	}
	return (str);
}
