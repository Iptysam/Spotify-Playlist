#include <stdio.h>

/**
 * main - prints all single digit numbers using putchar
 * Return: Always 0
 */

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}
