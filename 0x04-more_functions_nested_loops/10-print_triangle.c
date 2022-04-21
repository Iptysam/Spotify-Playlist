#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 *
 */

void print_triangle(int size)
{
int i, j, space;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i < size; i++)
{
for (space = 1; space <= (size - i); space++)
{
_putchar(' ');
}
for (k = 1; k < i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
