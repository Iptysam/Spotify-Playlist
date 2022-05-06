#include <stdio.h>
#include "main.h"

/**
* _memcpy - function to copy memory area
* @src: copy memory from
* @dest: copy memory area to
* @n: memory bytes parameter
* Return: dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
