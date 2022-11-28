#include "lists.h"

/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: listint_t*
 * @index: int
 *
 * Return: listint*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;
for (node = 0; node < index; node++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
