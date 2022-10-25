#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 * @head: pointer of the first node
 * @index: the index of the node, starting at 0
 * Return: indexed node or NULL if not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i < index)
	{
		if (temp == NULL)
			break;
		temp = temp->next;
		i++;
	}
	return (temp);
}
