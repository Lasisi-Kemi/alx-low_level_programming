#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t list
 *
 * @head: pointer to head element
 * @n: int data to add
 *
 * Return: Returns address of the new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *new;

temp = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
return (new);
}
