#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1 to 100
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if (i % 3 == 0)
{
_putchar("Fizz");
}
else if (i % 5 == 0)
{
_putchar("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
_putchar("FizzBuzz");
}
else
{
return 0;
