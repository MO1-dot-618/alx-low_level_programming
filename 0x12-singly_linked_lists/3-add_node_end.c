#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer to head node
 * @str: string to add to node
 * Return: address of created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last = *head;

	newNode = malloc(sizeof(list_t));
	if (newNode != NULL)
	{
		newNode->str = strdup(str);
		newNode->len = strlen(str);
		newNode->next = NULL;
		if (*head == NULL)
		{
			*head = newNode;
			return (newNode);
		}
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
	}
	return (newNode);
}
