#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 *
 * Description: This function iterates through each node of the linked list,
 * printing the length of the string and the string itself. If a string is
 * NULL, it prints [0] (nil).
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
