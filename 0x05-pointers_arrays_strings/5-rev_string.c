#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char *s2 = s;
	char temp;

	while (*s)
		s++;
	s--;
	while (s > s2)
	{
		temp = *s2;
		*s2 = *s;
		*s = temp;
		s2++;
		s--;
	}
}
