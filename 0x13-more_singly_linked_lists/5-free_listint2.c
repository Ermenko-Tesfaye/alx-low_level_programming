#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees a list
 * @head: a pointer to pointer of the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;

	if (head == NULL)
		return;
	while (curr)
	{
		if (*head == NULL)
			*head = curr;
		curr = curr->next;
		free(*head);
		*head = NULL;
	}
	head = NULL;
}
