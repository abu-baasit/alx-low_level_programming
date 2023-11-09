#include "lists.h"

/**
 * dlistint_len -function that  Prints a double linked list
 * @h: Pointer to the head of the list
 * Return: Size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
