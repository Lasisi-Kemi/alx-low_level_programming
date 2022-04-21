#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two parameter
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
