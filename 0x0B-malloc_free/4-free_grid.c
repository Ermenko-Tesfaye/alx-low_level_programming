#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2D grid previously created by alloc_grid
 * @grid: previusly allocated grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
}
