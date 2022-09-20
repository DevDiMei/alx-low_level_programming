#include"main.h"

/**
 *_strcpy - copies a string from one pointer to another
 *
 *@src: source of string parameter input
 *@dest: destination of string
 *
 *Return: pointer to dest input parameter
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
