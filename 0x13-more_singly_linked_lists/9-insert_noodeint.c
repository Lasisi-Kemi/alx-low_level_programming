#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at idx of list listint_t
 *
 * @head: pointer to head element
 * @idx: the index to insert at
 * @n: the int data to insert
 *
 * Return: a pointer to the new node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *prev_n, *new;
unsigned int counter = 0;
if ((void *)head == NULL)
{
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
temp = *head;
prev_n = *head;
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = temp;
*head = new;
return (new);
}
while (temp != NULL)
{
if (counter == idx)
{
prev_n->next = new;
new->next = temp;
return (new);
}
counter++;
prev_n = temp;
temp = temp->next;
}
if (counter == idx)
{
prev_n->next = new;
return (new);
}
free(new);
return (NULL);
}
