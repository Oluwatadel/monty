#include "monty.h"

/**
 * op_push - push value to stack
 * @stack: pointer to stack
 * @line_number: unused
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stdout, "Error: malloc failed\n");
		gvars.ret_val = -1;
		return;
	}
	if (gvars.value == NULL || check_val(gvars.value) == -1)
	{
		fprintf(stdout, "L%d: usage: push integer\n", line_number);
		free(new);
		gvars.ret_val = -1;
		return;
	}

	gvars.int_val = atoi(gvars.value);
	new->n = gvars.int_val;
	new->prev = NULL;

	if (*stack == NULL)
		new->next = NULL;
	else
		new->next = *stack;
	if (new->next != NULL)
		new->next->prev = new;
	*stack = new;
}
