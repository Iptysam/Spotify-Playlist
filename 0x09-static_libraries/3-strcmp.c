#include "main.h"
#include <stdio.h>

/**
* _strcmp - compares str1 to str2
* @s1: comparing string
* @s2: comparing string
* Return: str1, str2
*/
int _strcmp(char *s1, char *s2)
{
int len;

for (len = 0; s1[len] && s2[len];)
{
if (s1[len] == s2[len])
len++;
else
break;
}
return (s1[len] - s2[len]);
}
