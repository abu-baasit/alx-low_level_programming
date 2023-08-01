#include "lists.h"
/**
* free_listint2 - function that frees a linked list
* @head: pointer to the listint_t list
*/
void free_listint2(listint_t **head)
{
	listint_t *create;

	if (head == NULL)
	return;
	while (*head)
{
	create = (*head)->next;
	free(*head);
	*head = create;
}
	*head = NULL;
}
