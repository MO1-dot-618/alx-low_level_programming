#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a list of int
 * @head: pointer to head node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *index = head;
	size_t n = 0;

	while (index != NULL)
	{
		printf("[0x%h] %u\n", index->n, index->n);
		index = index->next;
		n++;
	}
	return (n);
}
