#include "monty.h"

/**
 * op_swap - function to swap the values of the top elements of a linked list
 * @stack: double pointer of stack_t type to head of doubly linked list
 * @line_number: unsigned int type of line number
 * Return: no return in this function
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int len = 0;

	len = list_len(stack);

	if (len < 2 || stack == NULL || *stack == NULL)
	{
		fprintf(stdout, "L%d: can't swap, stack too short\n",
			line_number);
		gvars.ret_val = -1;
		return;
	}
	else
	{
		temp = (*stack)->next;
		(*stack)->prev = temp;
		(*stack)->next = temp->next;
		temp->prev = NULL;
		temp->next = *stack;
		*stack = temp;
	}
}
