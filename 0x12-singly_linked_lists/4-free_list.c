#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free all lists
 * @head: pointer to head node
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *last;

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last->str);
		free(last->next);
	}
	last = NULL;
}
