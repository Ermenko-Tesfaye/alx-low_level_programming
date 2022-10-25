#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - a fun.. that prints a linked list
 * @head: a pointer to the first node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int difference, i = 0, number;
	void *address;

	if (!head)
		return (i);
	while (head != NULL)
	{
		difference = head - head->next;
		i++;
		number = head->n;
		printf("[%p] %i\n", (void *)head, number);
		if (difference > 0)
			head = head->next;
		else
		{
			address = head->next;
			number = head->next->n;
			printf("-> [%p] %i\n", address, number);
			break;
		}
	}
	return (i);
}
