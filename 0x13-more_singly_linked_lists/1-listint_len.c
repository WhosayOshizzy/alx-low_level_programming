#include "lists.h"
/**
 * listint_len - returns the number of elements in a singly  linked lists
 * @h: singly linked list of type listint_t to traverse
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nums = 0;

	while (h)
	{
		nums++;
		h = h->next;
	}
	return (nums);
}
