#include <stdio.h>
#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in linked list
 * @h: head of list
 * Return: number node's
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
