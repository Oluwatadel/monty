#include "monty.h"

/**
 * op_rotr - rotates the end of the node to the front
 * @stack: pointer to porint
 * @line_number: line number
 */
void op_rotr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	int len = 0;
	stack_t *front, *end;

	len = list_len(stack);
	if (len < 2)
		return;
	end = *stack;
	front = *stack;
	while (end->next)
		end = end->next;
	end->prev->next = NULL;
	end->next = front;
	front->prev = end;
	end->prev = NULL;
	*stack = end;
}
