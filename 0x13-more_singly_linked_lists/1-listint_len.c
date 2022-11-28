#include "lists.h"
#include <stdio.h>

/**
 * listint_len - listint_len
 * @h: listint_t*
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
