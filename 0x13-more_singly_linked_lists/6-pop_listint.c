#include "lists.h"

/**
 * pop_listint - removes the headnode of list listint_t
 * @head: pointer to head element
 *
 * Return: the node data n
 *
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (*head == NULL)
{
return (0);
}
temp = *head;
n = temp->n;
*head = temp->next;
free(temp);
return (n);
}
