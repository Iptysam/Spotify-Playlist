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
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
if (i < 100)
putchar(' ');
}
_putchar("\n");
return (0);
}
