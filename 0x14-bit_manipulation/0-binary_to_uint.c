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
unsigned int i = 0;

while (b[i] != '\0')
{
i++;
}
return (i);
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
unsigned int dec_num = 0;
int i, mul;

if (b == NULL)
{
return (0);
}
for (i = str_len(b) - 1, mul = 0; i >= 0; --i, mul++)
{
if (b[i] == '1' || b[i] == '0')
{
dec_num += (b[i] - 48) * (1 << mul);
}
else
{
return (0);
}
}

return (dec_num);
}
