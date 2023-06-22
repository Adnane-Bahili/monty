#include "monty.h"
/**
 * push - pushes element into the stack
 * @stack: provided by main
 * @cnt_ln: error messages line count
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int cnt_ln)
{
	char *b = global.argument;

	if ((is_digit(b)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", cnt_ln);
		status = EXIT_FAILURE;
		return;
	}
	if (global.data_struct == 1)
	{
		if (!add_node(stack, atoi(global.argument)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
}
