#include <stdio.h>
#include "main.h"
#define NULL 0
/**
* print_chessboard - function to print chessboard
* @a: array
* Return: 0
*/
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar(10);
}

}
