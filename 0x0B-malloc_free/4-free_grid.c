#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * created by your alloc_grid function
 * @grid: the grid we will free up
 * @height: height of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
int j = 0;
while (j < height)
{
free(grid[j]);
j++;
}
free(grid);
}
