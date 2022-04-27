#include <stdio.h>
#include "main.h"
#define NULL 0
/**
* _strchr - function to locate a character in a string
* @s: string to search in
* @c: char to return
* Return: pointer with first c or NULL if none
*/
char *_strchr(char *s, char c)
{
for (;; s++)
{
if (*s == c)
{
return (s);
}
if (*s == c && c == NULL)
return (s);
if (*s == NULL)
break;
}
return (NULL);
}
