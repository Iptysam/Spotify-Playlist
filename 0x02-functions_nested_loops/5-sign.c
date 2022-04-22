#include "main.h"

/**
 * print_sign - prints sign of number
 * @n: first operand
 * Return: 1 when n > 0, 0 when n = 0,
 * -1 when n < 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
if (n < 0)
{
_putchar('-');
}
else
{
_putchar('0');
}
_putchar('\n');
return 0;
}
