#include "lists.h"
/**
* get_nodeint_at_index - function that returns the nth
* node of a listint_t linked list
* @head: first node in the linked list
* @index: index of the node to return
* Return: return  NULL if node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *num = head;

	while (num && k < index)
{
	num = num->next;
	k++;
}
return (num ? num : NULL);
}
