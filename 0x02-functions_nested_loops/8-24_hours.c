#include "main.h"
/**
 * jack_bauer - a fun.. that prints every minute of the day of jack Bauer
 *	starting from 00:00 to 23:59.
 * Return: Non return function
 */
void jack_bauer(void)
{
	int h = 0, i, j, k;

	while (h < 3)
	{
		i = 0;
		while (((h * 10) + i) < 24)
		{
			if (i == 10)
				break;
			j = 0;
			while (j < 6)
			{
				k = 0;
				while (k < 10)
				{
					_putchar(h + 48);
					_putchar(i + 48);
					_putchar(':');
					_putchar(j + 48);
					_putchar(k + 48);
					_putchar('\n');
					k++;
				}
				j++;
			}
			i++;
		}
		h++;
	}
}
