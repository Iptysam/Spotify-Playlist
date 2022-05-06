#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: first operand
 * Return: Always 0
 */

int _strlen(char *s)
{
int index = 0;
while (*s != '\0')
{
index++;
s++;
}
return (index);
}
