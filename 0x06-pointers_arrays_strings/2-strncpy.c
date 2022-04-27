#include "main.h"
#include <stdio.h>
/**
* _strncpy - copies a string to nth value
* @dest: copy to string
* @src: copy from string
* @n: at parameter
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int len;

for (len = 0; src[len]; len++)
{
if (n > len)
dest[len] = src[len];
}
for ( ; n > len; len++)
{
dest[len] = '\0';
}
return (dest);
}
