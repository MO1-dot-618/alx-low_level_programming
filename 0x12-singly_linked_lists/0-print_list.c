#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints a list of nodes
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	char *str;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%ud] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
