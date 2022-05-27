#include "lists.h"

/**
 * free_listint - frees element of list listint_t
 * @head: pointer to head element
 *
 * Return: Returns nothing
 *
 */
void free_listint(listint_t *head)
{
listint_t *temp;

if (head == NULL)
return;
while (temp != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
