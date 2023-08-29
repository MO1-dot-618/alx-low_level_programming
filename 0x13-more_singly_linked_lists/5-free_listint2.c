#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free all lists
 * @head: pointer to head node
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	while (*head != NULL)
	{
		last = *head;
		*head = (*head)->next;
		free(last);
	}
	free(*head);
}
