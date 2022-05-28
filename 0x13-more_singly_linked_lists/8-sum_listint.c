#include "lists.h"

/**
 * sum_listint - sums the data(n) of list listint_t
 * @head: pointer to head element
 *
 * Return: Returns the sum.
 *
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
{
return (0);
}
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
