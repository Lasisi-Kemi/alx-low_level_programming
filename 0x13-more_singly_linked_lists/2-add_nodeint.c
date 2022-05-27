#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 *
 * @head: pointer to head element
 * @n: int data to add
 *
 * Return: Returns address of the new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
