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
if (width <= 0 || height <= 0)
return (NULL);


int **grid = (int **) malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);


for (int i = 0; i < height; i++)
{
grid[i] = (int *) malloc(width * sizeof(int));
if (grid[i] == NULL)
return (NULL);
}

for (int i = 0; i < height; i++)
{
for (int j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}
