#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1 to 100
 * Return: always 0
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
if (i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("Fizz");
}
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i < 100)
putchar(' ');
}
printf("\n");
return (0);
}
