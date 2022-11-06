#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: the arr to search
 * @size: the size of elements
 * @value: the value to search
 * Return: the value's index, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
int start = 0;
int end = size - 1;
int mid;

if (array == NULL)
return (-1);
while (start <= end)
{
print_array(array, end, start);
mid = start + (end - start) / 2;
if (array[mid] > value)
{
end = mid - 1;
}
else if (array[mid] < value)
{
start = mid + 1;
}
else
return (mid);
}
return (-1);
}

/**
 * print_array - prints the elements of an array of ints
 * @arr: the array to print
 * @n: the size of the array
 * @start: the index to start printing
 * Return: nothing
 */
void print_array(int *arr, int n, int start)
{
int i;
printf("Searching in array: ");
i = start;
while (i < n)
{
printf("%d, ", arr[i]);
i++;
}
printf("%d\n", arr[n]);
}
