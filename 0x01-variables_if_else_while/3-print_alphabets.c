#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Print the alphabet in lowercase then in uppercase
 *using while and purchar
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
alphabet = 'A';
while (alphabet <= 'Z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}




