#include <stdio.h>

/**
 *main - Entry point
 *Description: Program that prints the lowercase alphabet in reverse
 *Can only use putchar twice in code
 *Return: 0
 */

int main(void)
{
char a;
for (a = 'z'; a >= 'a'; --a)
{
putchar(a);
}
putchar('\n');
return (0);
}
