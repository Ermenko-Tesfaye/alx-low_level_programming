#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - a function that reverse a linked list
 * @head: apointerof poiter fir the first node
 * Return: apointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;

	if (!(*head))
		return (NULL);
	while (*head)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}
	*head = temp;
	return (temp);
}
