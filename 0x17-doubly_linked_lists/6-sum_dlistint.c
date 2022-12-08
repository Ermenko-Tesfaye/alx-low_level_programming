#include "lists.h"
/**
 * sum_dlistint - a fun.. that returns the sum of all the data in the list
 * @head: pointer to head of the linked list
 * Return: sum of all, or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
