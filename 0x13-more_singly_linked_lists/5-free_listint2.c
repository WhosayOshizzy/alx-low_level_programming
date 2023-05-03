#include "lists.h"
/**
 * free_listint2 - to frees a singly linked lists
 * @head: pointers to the listint_t lists to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
