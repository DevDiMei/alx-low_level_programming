#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Print the alphabet using while and purchar
 *
 *Return: Always 0 (Success)
 */

int main(void)

{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
