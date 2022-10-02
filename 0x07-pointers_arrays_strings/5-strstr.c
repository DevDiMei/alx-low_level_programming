#include "main.h"
/**
 *_strstr - locates a substring
 *
 *@haystack: string scanned
 *@needle : substring to look for
 *
 *Return: pointer to beginning of substring, NULL instead
 */

char *_strstr(char *haystack, char *needle)
{
char *h, *n;
while (*haystack != '\0')
{
h = haystack;
n = needle;
while (*n != '\0' && *haystack == *n)
{
haystack++;
n++;
}
if (!*n)
return (h);
haystack++;
}
return ('\0');
}
