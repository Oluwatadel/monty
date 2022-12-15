#include "monty.h"

/**
 * op_pint - function to print the value at the top of a stack
 * @stack: double pointer of stack_t type to head of stack
 * @line_number: unsigned int for line number
 * Return: print the value at the first element of stack
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stdout, "L%d: can't pint, stack empty\n", line_number);
		gvars.ret_val = -1;
		return;
	}
	printf("%d\n", (*stack)->n);
}
