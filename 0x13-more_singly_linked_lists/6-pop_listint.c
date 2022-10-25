#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a list
 * @head: a pointer of pointer that point the first node of a list
 * Return: 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp = *head;

	if (temp == NULL)
		return (0);
	i = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (i);
}
