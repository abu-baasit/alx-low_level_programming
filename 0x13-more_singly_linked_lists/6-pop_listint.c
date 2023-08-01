#include "lists.h"
/**
* pop_listint - function that deletes the head node
* @head: pointer to the first element
* Return:return 0 if linked list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (!head || !*head)
	return (0);
	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (node);
}
