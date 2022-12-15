#include "monty.h"

/**
 * op_pstr - function to print all elements in a stack
 * @stack: double pointer of type stack_t to head of doubly linked list
 * @line_number: unsigned int for line number(void in this function)
 * Return: no return, print list
 */
void op_pstr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *current;
	int check;

	if (*stack == NULL || stack == NULL)
	{
		putchar('\n');
		return;
	}
	current = *stack;
	while (current != NULL)
	{
		check = current->n;
		if (check >= 1 && check <= 127)
			putchar(check);
		else
			break;
		current = current->next;
	}
	putchar('\n');
}
