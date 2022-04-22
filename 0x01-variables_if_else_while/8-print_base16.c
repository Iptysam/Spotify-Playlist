#include <stdio.h>

/**
 * main - prints all numbers of base 16
 * Return: Always 0
 */

int main(void)
{
char c;
int i;

for (i = 0; i < 10; i++)
{
putchar('0' + i);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
