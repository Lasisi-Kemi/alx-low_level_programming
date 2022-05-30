#include "main.h"

/**
*set_bit - sets a bit at position to 1
*@n: number used
*@index: index is the index, starting from 0 of the bit you want to set
*
*Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
return (-1);

*n |= (1 << index);
return (1);
}
