#include <stdio.h>
/**
 * main - main fun..
 * Return: 1 
 */
int main(void)
{
	int i = 0;
	char *txt = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (txt[i])
	{
		putchar(txt[i]);
		i++;
	}
	return (1);
}
