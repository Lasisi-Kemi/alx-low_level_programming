#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: the ist node
 * @str: the string data
 *
 * Return: the pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
size_t s_len = 0;
char *strn;

if (str == NULL)
{
strn = NULL;
s_len = 0;
}
else
{
while (str[s_len] != '\0')
{
s_len++;
}
strn = strdup(str);
}
if (head == NULL)
{
return (NULL);
}
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strn;
new->len = s_len;
new->next = *head;
*head = new;
return (*head);
}
