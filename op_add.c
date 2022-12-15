#include "monty.h"

/**
 * op_add - function to add top two elements of a stack
 * @stack: double pointer of stack_t type to head of stack
 * @line_number: unsigned int type
 * Return: stack with new sum and removed node
 *
 */
void op_add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int len = 0;

	len = list_len(stack);
	if (len < 2 || stack == NULL || *stack == NULL)
	{
		fprintf(stdout, "L%d: can't add, stack too short\n",
			line_number);
		gvars.ret_val = -1;
		return;
	}
	else
	{
		temp = *stack;
		temp->next->n += temp->n;
		temp->next->prev = NULL;
		*stack = temp->next;
		free(temp);
	}
}
