#include "lists.h"
/**
 * add_dnodeint - a fun.. that adds a new node at the beginning of list
 * @head: pointer to dead
 * @n: value to be added
 * Return: address of the new element, or Null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = temp;
	(*head) = temp;
	return (*head);
}
