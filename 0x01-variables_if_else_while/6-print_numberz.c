#include <stdio.h>

/**
 *main - Entry point
 *Descriptio: Program that prints all single digit numbers of base 10
 *Not allowed to use an variable of type char
 *Can only use the putchar function
 *Can only use putchar twice in the code
 *Return: 0
 */

int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar ('\n');
return (0);
}
