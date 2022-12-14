#include "lists.h"
/**
 * add_dnodeint_end - fun.. adds a new node at the ende
 * @head: head of the linked list
 * @n: data to be inserted
 * Return: the address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (last->next)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	return (*head);
}
