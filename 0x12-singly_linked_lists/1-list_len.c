#include <stdio.h>
#include "lists.h"
/**
* list_len - function that returns number element
* @h: pointer to the list_t list
* Return: return number of elements
*/
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
