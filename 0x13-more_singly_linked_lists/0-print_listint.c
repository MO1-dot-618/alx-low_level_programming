#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints a list of int
 * @head: pointer to head node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *head)
{
	const listint_t *index = head;
	size_t n = 0;

	while (index != NULL)
	{
		printf("%u\n", index->n);
		index = index->next;
		n++;
	}
	return (n);
}
