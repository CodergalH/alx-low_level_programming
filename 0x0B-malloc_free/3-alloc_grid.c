#include <stdio.h>
#include <stdlib.h>

/**
 * *alloc_grid - create 2D Arrays
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
int i, j, k;
int **grid;

if (width <= 0 || height <= 0)
return (NULL);

grid = (int **) malloc(height * sizeof(int *));
if (grid == NULL)
{
free(grid);
return (NULL);
}

for (i = 0; i < height; i++)
{
grid[i] = (int *) malloc(width * sizeof(int));
if (grid[i] == NULL)
{
free(grid[i]);
return (NULL);
}
}

for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
{
grid[j][k] = 0;
}
}

return (grid);
}
