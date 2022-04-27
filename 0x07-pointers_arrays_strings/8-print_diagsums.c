#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints sum of two diadnols of a square
* @a: first operand
* @size: second operand
* Return: 0
*/
void print_diagsums(int *a, int size)
{
int r, c, sum, sum1, loc;

sum = 0;
sum1 = 0;

for (r = 0; r <= (size - 1); r++)
{
for (c = 0; c <= (size - 1); c++)
{
if (r == c)
{
loc = ((size * r) + c);
sum = *(a + loc) +sum;
}
if (c == (size - 1) - r)
{
loc = ((size * r) + c);
sum1 = *(a + loc) +sum1;
}
}
}
printf("%d", sum);
printf(", %d\n", sum1);
}
