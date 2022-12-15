#include "monty.h"
#include <string.h>
vars gvars;

/**
 * main - runs monty interpreter
 * @argc: argument count
 * @argv: argument vector
 * Return: return -1 if failed, else 1
 */
int main(int argc, char **argv)
{
	FILE *fp;
	stack_t *head = NULL;
	ssize_t read = 0;
	size_t len = 0;
	int token_ret = 0;

	gvars.lineptr = NULL;
	gvars.line_number = 0;
	if (argc != 2)
	{
		fprintf(stdout, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stdout, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&gvars.lineptr, &len, fp)) != -1)
	{
		gvars.line_number++;
		token_ret = tokenizer(gvars.lineptr);
		if (token_ret != -1)
		{
			find_op(&head);
			if (gvars.ret_val == -1)
			{
				free(gvars.lineptr);
				free_l(head);
				fclose(fp);
				exit(EXIT_FAILURE);
			}
		}
	}
	free(gvars.lineptr); free_l(head); fclose(fp);
	return (gvars.ret_val);
}
