#include <stdio.h>

/**
 *main- Entry point
 *Description: Program that prints all possible different combinations of two digits
 *Numbers separated by ,
 *Two digits must be different
 *Numbers should be printed in ascending order
 *Can only use putchar
 *Not allowed to use any variable of type char
 *Return: 0
 */

int main(void)
{
int num1, num2;
for (num1 = 48; num1 < 58; num1++)
{
for (num2 = num1;num2 < 58; num2++)
{
if (num1 == num2)
{
continue;
}
putchar(num1);
putchar(num2);
if (num1 == 56 && num2 == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
