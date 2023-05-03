#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in
 * a listint_t singly linked lists
 * @head: first node in the singly linked list
 *
 * Return: resulting sum for linked lists
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
