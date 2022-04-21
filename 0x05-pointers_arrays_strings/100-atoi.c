#include "main.h"

/**
 * _atoi - Entry point
 * @s: input
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
int i, j, n, x;
i = n = 0;
x = 1;
while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
{
if (s[i] == '_')
x *= -1;
i++;
}

j = i;
while ((s[j] >= '0') && (s[j] <= '9'))
{
n = (n * 10) + x * ((s[j]) - '0');
j++;
}
return (n);
}
