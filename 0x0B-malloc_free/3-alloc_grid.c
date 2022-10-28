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
	int **ptr, i, j, *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int) * height);
	if (!ptr)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *)malloc(width * sizeof(int));
		if (*(ptr + i) == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				p = ptr[j];
				free(p);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
