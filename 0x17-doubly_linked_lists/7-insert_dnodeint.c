#include "lists.h"

/**
 * insert_dnodeint_at_index - function that insert at index
 * @h: Pointer to the head
 * @idx: Index to be added
 * @n: Number value
 * Return: New Node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *new_node = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (curr != NULL)
	{
		if (i == idx)
		{
			curr->prev->next = new_node;
			new_node->prev = curr->prev;

			new_node->next = curr;
			return (new_node);
		}
		curr = curr->next;
		i++;
	}
	if (i == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
