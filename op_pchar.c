#include "monty.h"

/**
 * op_pchar - function to print the char value at the top of a stack
 * @stack: double pointer of stack_t type to head of stack
 * @line_number: unsigned int for line number
 * Return: print the value at the first element of stack
 */
void op_pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stdout, "L%d: can't pchar, stack empty\n", line_number);
		gvars.ret_val = -1;
		return;
	}
	if (((*stack)->n > 64 && (*stack)->n < 91) || ((*stack)->n > 96 &&
						       (*stack)->n < 123))
		printf("%c\n", (*stack)->n);
	else
	{
		fprintf(stdout, "L%d: can't pchar, value out of range\n",
			line_number);
		gvars.ret_val = -1;
		return;
	}
}
