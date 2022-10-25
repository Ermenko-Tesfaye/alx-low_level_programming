#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - a function that frees a list
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head;

	while (curr)
	{
		if (head == NULL)
			head = curr;
		curr = curr->next;
		free(head);
		head = NULL;
	}
}
