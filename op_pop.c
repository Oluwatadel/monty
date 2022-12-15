#include "monty.h"

/**
 * op_pop - function to remove node at head of stack
 * @stack: double pointer of stack_t type to head of doubly linked list
 * @line_number: unsigned int for line_number to be deleted
 * Return: no return in function, delete node at head of stack
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stdout, "L%d: can't pop an empty stack\n",
			line_number);
		gvars.ret_val = -1;
		return;
	}
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		temp = (*stack)->next;
		(*stack) = temp;
		temp = temp->prev;
		(*stack)->prev = NULL;
		free(temp);
	}
}
