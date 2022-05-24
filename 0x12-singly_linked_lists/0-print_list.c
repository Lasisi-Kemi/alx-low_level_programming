#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: the head node
 *
 * Return: the number of elements on the node
 */
size_t print_list(const list_t *h)
{
unsigned int n = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
n++;
}
return (n);
}
