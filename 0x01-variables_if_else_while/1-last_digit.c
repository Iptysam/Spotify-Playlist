#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of number
 * if...else if... else statement to determine integers and value
 * Return : Always 0 (Success)
 */
int main(void)
{
int n;
int f;

srand(time(0));
n = rand() - RAND_MAX / 2;
f = n % 10;
printf("Last digit of %d is %d ", n, f);
if (f > 5)
{
printf("and is greater than 5\n");
}
else if (f != 0 && f < 6)
{
printf("and is less than 6 and not 0\n");
}
else
{
printf("and is 0\n");
}
return (0);
}
