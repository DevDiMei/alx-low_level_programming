#include <stdio.h>
#include"main.h"

/**
 *print_array - prints n elements of an array of integers
 *
 *@n: elements parameter input
 *@a: string parameter input
 *
 */

void print_array(int *a, int n)
{
short c = 0;
while (n-- > 0)
{
printf("%d", a[c++]);
if (n != 0)
printf(", ");
}
printf("\n");
}
