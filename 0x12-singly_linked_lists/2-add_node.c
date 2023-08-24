#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list
 * @head: pointer to head node
 * @str: string to add to node
 * Return: address of created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode != NULL)
	{
		newNode->str = strdup(str);
		newNode->len = strlen(str);
		newNode->next = *head;
		(*head)->next = newNode;
		*head = newNode;
	}
	return (newNode);
}

