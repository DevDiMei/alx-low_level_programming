#include "main.h"

/**
 *_strcmp - compare
 *@s1: pointer to char parameter
 *@s2: pointer to char parameter
 *Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
int i;
int r;

i = 0;

while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
{
i++;
}
r = s1[i] - s2[i];
return (r);
}
