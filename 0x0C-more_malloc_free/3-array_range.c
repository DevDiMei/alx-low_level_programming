#include <stdlib.h>
#include <stdio.h>

/**
 *array_range - creates an array of integers
 *
 *@min: minimum
 *@max: maximum
 *
 *Return: pointer
 */

int *array_range(int min, int max)
{
int j, i = 0;
int *p;
if (min > max)
{
return (NULL);
}
j = (max - min) + 1;
p = malloc(sizeof(int) * j);
if (!p)
{
free(p);
return (NULL);
}
for (i = 0; min <= max; min++, i++)
{
p[i] = min;
}
return (p);
}
