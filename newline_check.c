#include "monty.h"

/**
 * newline_check - checks if the first char is a newline after first spaces
 * @str: takes a string
 * Return: 1 if it's a new line else 0
 */
int newline_check(char *str)
{
	int i = 0;

	if (str[i] == '\n')
		return (1);

	while (str[i])
	{
		if (str[i] != ' '  || str[i + 1] != ' ')
			break;
		i++;
	}
	i++;
	if (str[i] == '\n')
		return (1);
	else
		return (0);
}
