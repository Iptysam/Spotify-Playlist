#include <stdio.h>
#include "main.h"

/**
* _strchr - function to locate a character in a string
* @s: string to search in
* @c: char to return
* Return: pointer with first c or NULL if none
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);

return (NULL);
}
