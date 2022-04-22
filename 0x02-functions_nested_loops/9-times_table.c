#include "main.h"

/**
 * times_table - prints timetable
 * Return: void
 */

void times_table(void)
{
int rows = 0, columns = 0, multi;

for (rows = 0; rows <= 9; rows++)
{
_putchar('0');
for (columns = 1; columns <= 9; columns++)
{
multi = rows * columns;
if (multi < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(multi % 10 + '0');
}
else if (multi >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(multi / 10 + '0');
_putchar(multi % 10 + '0');
}
}
_putchar(10);
}
}
