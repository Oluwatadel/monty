#include "monty.h"

/**
 * op_rotl - rotates the stack to the top
 * @stack: pointer to porint
 * @line_number: line number
 */
void op_rotl(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	int len = 0;
	stack_t *front, *end;

	len = list_len(stack);
	if (len < 2)
		return;
	end = *stack;
	while (end->next)
		end = end->next;

	front = *stack;
	*stack = front->next;
	(*stack)->prev = NULL;
	front->next = NULL;
	front->prev = end;
	end->next = front;
}
