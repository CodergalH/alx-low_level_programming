#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free prebiously allocated memory
 * 
 * @*grid: array
 * @height: no of arrays in array
 * Return: nothing
 */

void free_grid(int **grid, int height) {

for (int i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
