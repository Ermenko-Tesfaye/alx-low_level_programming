#include "main.h"
#include <stddef.h>
/**
 * _atoi - a function to convert string to an intiger
 * @s: string value
 * Return: 0 if no string
 */
int _atoi(char *s)
{
	int i, tot = 0, flag = 0;

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			if ((i != 0) && (s[i - 1] == '-'))
			{
				tot += (((int) s[i]) - 48) * -1;
				flag = 1;
			}
			else
			{
				if (flag == 0)
					tot += ((int) s[i]) - 48;
				else
					tot -= ((int) s[i]) - 48;
			}
			if (s[i + 1] > 47 && s[i + 1] < 58)
				tot *= 10;
			else
				break;
		}
	}
	return (tot);
}
