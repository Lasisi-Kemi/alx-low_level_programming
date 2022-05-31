#include "main.h"

/**
 * str_len - returns the lenght of a string
 *
 * @b: the str to check
 *
 * Return: the lenght
 */
unsigned int str_len(const char *b)
{
unsigned int a = 0;

while (b[a] != '\0')
{
a++;
}
return (a);
}
/**
 * binary_to_uint - converts binary to u_int
 *
 * @b: the str to check
 *
 * Return: the converted number, 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int deci = 0;
int a, mull;

if (b == NULL)
{
return (0);
}
for (a = str_len(b) - 1, mull = 0; a >= 0; --a, mull++)
{
if (b[a] == '1' || b[a] == '0')
{
deci += (b[a] - 48) * (1 << mull);
}
else
{
return (0);
}
}

return (deci);
}
