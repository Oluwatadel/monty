#include "monty.h"

/**
 * tokenizer - create tokens for command and value
 * @str: takes a string
 * Return: 1 on success
 */
int tokenizer(char *str)
{
	if (newline_check(str) == 1)
		return (-1);

	gvars.cmd = strtok(str, delim);
	if (gvars.cmd[0] == '#')
		return (-1);
	if (gvars.cmd[0] != '\0')
	{
		gvars.value = strtok(NULL, delim);
		if (gvars.value != NULL)
			gvars.int_val = atoi(gvars.value);
	}
	return (1);
}
