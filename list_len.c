#include "monty.h"

/**
 * list_len - number of elements in linked list
 * @h: pointer to first node
 * Return: returns number of elements
 */

int list_len(stack_t **h)
{
	int i = 0;
	stack_t *current;

	current = *h;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
