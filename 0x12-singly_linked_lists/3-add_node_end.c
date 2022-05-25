#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 *
 * @head: the ist node
 * @str: the string data
 *
 * Return: the pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
int s_len = 0;
char *strn;
list_t *temp, *new;
temp = *head;
if (str == NULL)
{
return (NULL);
}
while (str[s_len] != '\0')
{
s_len++;
}
strn = strdup(str);
if (strn == NULL)
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
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
return (new);
}
