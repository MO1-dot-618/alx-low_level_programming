#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of nodes
 * @head: pointer to head node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *head)
{
	const listint_t *index = head;
	size_t n = 0;

	while (index != NULL)
	{
		index = index->next;
		n++;
	}
	return (n);
}
