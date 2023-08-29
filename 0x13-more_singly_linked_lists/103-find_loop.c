#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - find loop
 * @head: pointer to head node
 * Return: pointer to loop node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *index = head->next;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		while (index != NULL)
		{
			if (index == head)
			{
				return (index);
			}
		}
	}
	return (NULL);
}
