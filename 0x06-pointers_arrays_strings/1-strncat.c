#include "main.h"
#include <stdio.h>

/**
* _strncat - concats two strings together limited by n
* @dest: destination of copy
* @src: source of copy
* @n: string limit of copy
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int len, len2;

for (len = 0; dest[len]; len++)
;
for (len2 = 0; src[len2]; len2++)
{
if (n > len2)
dest[len] = src[len2];
len++;
}
return (dest);
}
