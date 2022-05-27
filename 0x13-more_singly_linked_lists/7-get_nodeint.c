#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of list listint_t
 *
 * @head: pointer to head element
 * @index:  the index to return
 *
 * Return: a pointer to the node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int counter = 0;

if (head == NULL)
{
return (NULL);
}
while (head != NULL)
{
if (counter == index)
{
node = head;
}
counter++;
head = head->next;
}
if (index >= counter)
{
return (NULL);
}

return (node);
}
