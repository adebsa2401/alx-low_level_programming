#include "lists.h"

/**
 * add_nodeint - add_nodeint
 * @head: listint_t**
 * @n: int
 *
 * Return: listint_t*
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
