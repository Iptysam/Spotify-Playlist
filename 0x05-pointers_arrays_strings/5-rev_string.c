#include <stdio.h>
#include "main.h"

/**
 * rev_string - to reverse a string
 * @s: first operand
 * Return: void
 */

void rev_string(char *s)
{
int i = 0;
int r = 0;
while (s[i])
{
i++;
}

while (--i > r)
{
char front = s[r];
char back = s[i];

s[r] = back;
r++;
s[i] = front;
}
}
