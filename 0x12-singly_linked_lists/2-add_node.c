#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add the new node begining of the list_t
 * @head: the pointer to structure
 * @str: string of the file
 * Return: the addrres of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newerNode;
	unsigned int length = 0;

	newerNode = malloc(sizeof(list_t));
	if (newerNode == NULL)
	{
		free(newerNode);
		return (NULL);
	}
	newerNode->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	newerNode->len = length;
	if (*head != NULL)
		newerNode->next = *head;
	if (*head == NULL)
		newerNode->next = NULL;
	*head = newerNode;
	return (*head);
}
