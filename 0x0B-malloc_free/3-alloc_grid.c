#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function returns a pointer to a 2D array of integers
 * @width: width element of an array
 * @height: another dimention of an array
 * Return: pointer to another pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr, *line, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int) * height);
	if (!ptr)
		return (NULL);
	line = (int *)malloc(sizeof(int) * height * width);
	if (!line)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = line + i * width;
	}
	for (i = 0; i < height * width; i++)
		line[0] = 0;
	return (ptr);
}
