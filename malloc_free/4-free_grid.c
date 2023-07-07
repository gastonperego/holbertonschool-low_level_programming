#include "main.h"
#include <stdlib.h>
/**
 * free_grid- frees a grid
 *
 * @grid: grid to free
 * @heigth: heigth of the grid
 *
 * Return; void
 */
void free_grid(int **grid, int heigth)
{
	int c = heigth;

	for (; c > 0; c--)
	{
		free(grid[c]);
	}
	free(grid);
}
