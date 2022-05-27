#include "lists.h"

/**
 * free_listint2 - frees element of list listint_t
 * @head: pointer to head element
 *
 * Return: Returns nothing
 *
 */
void free_listint2(listint_t **head)
{
listint_t *temp, *next_node;

if ((void *)head == NULL)
return;
temp = *head;
next_node = *head;

if (temp != NULL)
{
while (temp != NULL)
{
temp = temp->next;
free(next_node);
next_node = temp;
}
*head = NULL;
}
}
