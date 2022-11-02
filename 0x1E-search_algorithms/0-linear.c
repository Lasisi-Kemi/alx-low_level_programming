#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: the arr. to search
 * @size: the size of the elements
 * @value: the value to search for
 *
 * Return: the value's index if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array == NULL)
return (-1);
while (i < size)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
i++;
}
return (-1);
}
