#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first operand
 * @src: second operand
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int len;
int len2;

for (len = 0; dest[len]; len++)
		;
for (len2 = 0; src[len2]; len2++)
{
dest[len] = src[len2];
len++;
}
return (dest);
}

