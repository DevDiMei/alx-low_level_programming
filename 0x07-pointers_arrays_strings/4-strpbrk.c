#include "main.h"
/**
 *_strpbrk - locates the first occurrence of string s in string
 *accept
 *
 *@s: string scanned
 *@accept: test
 *
 *Return: pointer to byte in s
 *
 */

char *_strpbrk(char *s, char *accept)
{
int i, f;
i = 0;
while (s[i] != '\0')
{
f = 0;
while (accept[f] != '\0')
{
if (s[i] == accept[f])
return (s + i);
f++;
}
i++;
}
return ('\0');
}
