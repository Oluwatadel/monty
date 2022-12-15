#include "monty.h"

/**
 * free_l - frees node
 * @head: pointer to first node
 */

void free_l(stack_t *head)
{
	stack_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
