#include "main.h"

/**
 * get_endianness - checks whether a machine is big endian or little endian
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
unsigned int a = 1;
char *endian = (char *)&a;

if (*endian)
return (1);
return (0);

}
