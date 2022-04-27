#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string, 
 * starting with the first character
 * @str: first operand
 * Return: void
 */

void puts2(char *str)
{
int counter = 0;
int i = 0;

while (str[i])
{
counter++;
i++;
}
for (i = 0; i < counter; i++)
{
if (i % 2 == 0)
{
putchar(str[i]);
}
}
putchar(10);
}
