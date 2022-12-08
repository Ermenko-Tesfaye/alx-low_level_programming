#include "lists.h"
/**
 * insert_dnodeint_at_index - a fun. that insert a new node at a given position
 * @h: apointer points to head of a linked list
 * @idx: the index of the list where new node is inserted
 * @n: the value for new node
 * Return: the adress of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *mid = *h;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	while (mid)
	{
		if (i == idx - 1)
		{
			dlistint_t *tmp = mid->next;

			mid->next = new_node;
			new_node->next = tmp;
			new_node->prev = mid;
			tmp->prev = new_node;
			return (new_node);
		}
		mid = mid->next;
		i++;
	}
	return (NULL);
}
