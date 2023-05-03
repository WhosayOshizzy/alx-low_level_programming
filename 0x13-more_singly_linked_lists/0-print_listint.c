#include "lists.h"
/**
 * print_listint - prints all of the elements of a more singly linked lists
 * @h: more singly linked lists of type listint_t to print
 *
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nums = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nums++;
		h = h->next;
	}
	return (nums);
}
