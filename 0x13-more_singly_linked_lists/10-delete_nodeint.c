#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at indx of list listint_t
 *
 * @head: pointer to head element
 * @index: the index to insert at
 *
 * Return: a pointer to the new node
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node, *prev_n;
unsigned int counter = 0;

if (head == NULL || *head == NULL)
{
return (-1);
}
node = *head;
prev_n = *head;
if (index == 0)
{
*head = node->next;
free(node);
return (1);
}
while (node->next != NULL)
{
if (counter == index)
{
prev_n->next = node->next;
free(node);
return (1);
}
counter++;
prev_n = node;
node = node->next;
}
if (counter == index)
{
prev_n->next = NULL;
free(node);
return (1);
}
return (-1);
}
