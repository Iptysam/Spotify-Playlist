#include <stdio.h>
#include "main.h"

/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: string to search in first  occur
* @accept: string parameter set
* Return: pointer to type s or null
*/
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
