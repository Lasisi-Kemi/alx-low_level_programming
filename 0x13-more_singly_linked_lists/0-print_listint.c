#include "lists.h"

/**
 * print_listint - prints element of list listint_t
 * @h: pointer to head element
 *
 * Return: Returns the num of elements
 *
 */
size_t print_listint(const listint_t *h)
{
size_t counter = 0;

while (h != NULL)
{
printf("%d\n", h->n);
counter++;
h = h->next;
}
return (counter);
}
