#include "lists.h"
/**
 * dlistint_len - a fun.. returns the number of element in a linked list
 * @h: node in the doubly linked list
 * Return: number element
 */
size_t dlistint_len(const dlistint_t *h)
{
	int no_element = 0;

	while (h != NULL)
	{
		no_element++;
		h = h->next;
	}
	return (no_element);
}
