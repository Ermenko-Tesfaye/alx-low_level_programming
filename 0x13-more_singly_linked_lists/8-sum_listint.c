#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data(n) of a list
 * @head: head pointer
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
