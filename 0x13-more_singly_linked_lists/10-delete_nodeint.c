#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delet the node at index 'index' of a list
 * @head: a pointer of pointer for the 1st node
 * @index: index of the node to delete
 * Return: 1 in success, or -1 in failer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *prev = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}
	else
	{
		while (index != 1)
		{
			if (!curr || !(curr->next))
				return (-1);
			curr = curr->next;
			index--;
		}
		prev = curr->next;
		curr->next = prev->next;
		free(prev);
		prev = NULL;
	}
	return (1);
}
