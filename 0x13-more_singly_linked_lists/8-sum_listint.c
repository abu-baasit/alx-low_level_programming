#include "lists.h"
/**
* sum_listint -  function that returns the sum of
* all the data (n) of a listint_t linked list
* @head: first node in the linked list
* Return: return zero if list is empty
*/
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *data = head;

	while (data)
{
	add += data->n;
	data = data->next;
}
	return (add);
}
