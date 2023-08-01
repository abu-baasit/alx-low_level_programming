#include "lists.h"
/**
* free_listint - function that frees a listint_t list
* @head: listint_t list to be freed
*/
void free_listint(listint_t *head)
{
	listint_t *create;
while (head)
{
	create = head->next;
	free(head);
	head = create;
}
}
