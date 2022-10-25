#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - a fun.. that adds a new node at the end of a list
 * @head: pointer to head of the list
 * @n: value
 * Return: address os the new element, or NULL on failer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
