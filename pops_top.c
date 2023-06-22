#include "monty.h"
/**
 * pop - pops the top
 * @stack: provided by main
 * @cnt_ln: error messages line count
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int cnt_ln)
{
	stack_t *temp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", cnt_ln);
		status = EXIT_FAILURE;
		return;
	}
	temp = (*stack)->next;
	free(*stack);
	*stack = temp;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
