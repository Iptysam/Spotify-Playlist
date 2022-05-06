#include "main.h"

/**
 * is_prime_number - gets prime numbers
 * @n: integer
 * Return: on error is -1, success 0
 */

int is_prime_number(int n)
static int i = 2; 

    // Base Case
if (n == 0 || n == 1)
{
return (-1);
} 
// Recursive Case
if (n == i)
return (0); 
// check if num is divisible by any number
if (n % i == 0)
{
return (0);
}
i++; 
// recursive function call.
return is_prime_number(n);

