#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps value of two integers
 * @a: first operand
 * @b: second operand
 * Return: void
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
