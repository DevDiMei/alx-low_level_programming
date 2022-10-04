#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a two dimentional array of characters
 *@width: w
 *@height: 1
 *
 *Return: NULL, pointer
 */

int **alloc_grid(int width, int height)
{
int i = 0, j;
int **arr;
if (width <= 0 || height <= 0)
{
return (NULL);
}
arr = (int **)malloc(height * sizeof(int *));
if (!arr)
{
free(arr);
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(width * sizeof(int));
if (!arr[i])
{
for (j = 0; j <= i; j++)
{
free(arr[j]);
}
free(arr);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
