#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches an array using jump search algoritm
 * @array: the array to search
 * @size: the array's a size
 * @value: the value to search for
 *
 * Return: the value's index if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
size_t step, i, j;

i = 0;
step = sqrt(size);
while (array[i] <= value && i < size)
{
if (array[i] == value)
break;
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
j = i;
i += step;
}
printf("Value found between indexes [%ld] and [%ld]\n", j, i);
i -= step;
for (j = 0; j <= step && i < size; i++, j++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
