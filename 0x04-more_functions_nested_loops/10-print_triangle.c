#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 *
 */

void print_triangle(int size)
{
int i, j, k;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 1; j < size; j++)
{
for (k = 1; k < size; k++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
}
_putchar('#');
_putchar('\n');
}
}
}
