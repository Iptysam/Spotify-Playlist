#include <stdio.h>
#include "main.h"

/**
* _strspn - function to get through length of prefix substring
* @s: return num bytes of
* @accept: bytes from
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j;
int c = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
c++;
}
}
else
return (c);

}
return (c);
}
