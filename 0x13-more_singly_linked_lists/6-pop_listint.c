#include "lists.h"
/**
 * pop_listint - to deletes the head node of a singly linked lists
 * @head: the pointers to the first elements in the singly linked lists
 *
 * Return: the data inside all the elements that was deleted,
 * or 0 in case if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
