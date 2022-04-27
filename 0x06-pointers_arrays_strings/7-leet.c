#include <stdio.h>
#include "main.h"
/**
* leet - function to swap letters with integers
* @s: array
* Return: s
*/
char *leet(char *s)
{
int i, j;
char alpha[] = "AEOTLaeotl";
char numb[] = "4307143071";

for (i = 0; s[i]; i++)
{
for (j = 0; alpha[j]; j++)
if (s[i] == alpha[j])
{
s[i] = numb[j];
/*break;*/
}
}
return (s);
}
