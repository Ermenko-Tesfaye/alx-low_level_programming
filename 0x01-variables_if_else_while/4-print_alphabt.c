#include <stdio.h>
/**
 * main - main fun..
 * Return: 0
 */
int main(void)
{
	char alp = 'a';

	while (alp != '{')
	{
		if (alp == 'q' || alp == 'e')
		{
			alp++;
			continue;
		}
		else
			putchar(alp++);
	}
	putchar('\n');
	return (0);
}
