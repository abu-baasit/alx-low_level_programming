#include "lists.h"
/**
* insert_nodeint_at_index -  function that inserts a new node
* at a given position
* @head: pointer to the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the new node
* Return: return NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new_node;
	listint_t *data = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
	for (k = 0; data && k < idx; k++)
{
	if (k == idx - 1)
{
	new_node->next = data->next;
	data->next = new_node;
	return (new_node);
}
	else
	data = data->next;
}
	return (NULL);
}
