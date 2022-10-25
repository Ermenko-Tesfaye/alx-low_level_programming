#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node
 * @head: a pointer of pointer for the first node
 * @idx: index for whare the new node is inserted
 * @n: value
 * Return: Null on failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	while (idx > 1)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		idx--;
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
