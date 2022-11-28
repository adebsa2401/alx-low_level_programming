#include "lists.h"

/**
 * add_nodeint_end - add_nodeint_end
 * @head: listint_t**
 * @n: int
 *
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
return (*head);
}
