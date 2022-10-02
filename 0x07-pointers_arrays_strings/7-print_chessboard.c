#include "main.h"
/**
 *print_chessboard - prints the chessboard
 *@a: array input
 *
 *Return: void
 *
 */

void print_chessboard(char (*a)[8])
{
int i, f;
i = 0;
f = 0;
while (i < 64)
{
if (i % 8 == 0 && i != 0)
{
f = i;
_putchar('\n');
}
_putchar(a[i / 8][i - f]);
i++;
}
_putchar('\n');
}
