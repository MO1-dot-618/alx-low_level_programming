#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - free all lists
 * @head: pointer to head node
 * Return: no return
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *last;
	size_t n = 0;

	while (*head != NULL)
	{
		last = *head;
		*head = (*head)->next;
		free(last);
		n++;
	}
	free(*head);
	return (n);
}
