#include <stdio.h>
#include "main.h"

/**
 * puts_half - 
 * @str: first operand
 * Return: void
 */

void puts_half(char *str)
{
int counter = 0, i, d;

for (i = 0; str[i]; i++)
counter++;
if (counter % 2 == 0)
{
i = counter / 2;
}
else
{
d = (counter - 1) / 2;
i = counter - d;
}
for ( ; i < counter; i++)
{
putchar(str[i]);
}
putchar(10);
}
