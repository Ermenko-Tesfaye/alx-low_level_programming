#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	char alp = '0';

	while (alp != 'g')
	{
		if (alp == ':')
			alp = 'a';
		putchar(alp++);
	}
	putchar('\n');
	return (0);
}
