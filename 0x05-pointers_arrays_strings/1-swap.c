/**
 *swap_int - swaps the values of two integers
 *
 *@a: pointer
 *@b: pointer
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
