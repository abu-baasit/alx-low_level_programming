#include "lists.h"

/**
 * add_dnodeint_end -functiob that adds a node to the start
 * of a  doubly linked list
 * @head: Double pointer to the head node
 * @n: New member value
 * Return:return  NULL or new address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node = NULL;
	dlistint_t *current = *head;

	last_node = malloc(sizeof(dlistint_t));
	if (!last_node)
		return (NULL);

	last_node->n = n;

	if (*head == NULL)
	{
		last_node->prev = *head;
		last_node->next = NULL;
		*head = last_node;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		last_node->prev = current;
		current->next = last_node;
		last_node->next = NULL;
	}

	return (last_node);
}
