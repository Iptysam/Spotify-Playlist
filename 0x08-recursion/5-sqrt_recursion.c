#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: integer
 * Return: -1 when does not give a natural square root
 *  and 0 on success
 */

int _sqrt_recursion(int n)
{
if (n <= 0)
return (-1);
return (n * _sqrt_recursion(n - 1));
}
