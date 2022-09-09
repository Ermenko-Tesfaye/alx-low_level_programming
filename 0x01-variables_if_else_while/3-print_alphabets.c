#include <stdio.h>
/**
 * main - main fun..
 * Return: Always 0
 */
int main(void)
{
	char alp = 'a';

	while (alp != '[')
	{
		if (alp == '{')
			alp = 'A';
		putchar(alp++);
	}
	putchar('\n');
	return (0);
}
