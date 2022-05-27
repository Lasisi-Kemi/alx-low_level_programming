#include "lists.h"

/**
 * listint_len - returns the num of elements in listint_t list
 * @h: pointer to head element
 *
 * Return: Returns the num of elements
 *
 */
size_t listint_len(const listint_t *h)
{
size_t counter = 0;

while (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}
