#include "monty.h"
/**
 * _add -  adds first two nodes of the stack
 * @stack: provided by main
 * @cnt_ln: line count
 *
 * Return: void
 */
void _add(stack_t **stack, unsigned int cnt_ln)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", cnt_ln);
		status = EXIT_FAILURE;
		return;
	}
	res = ((*stack)->next->i) + ((*stack)->i);
	pop(stack, cnt_ln);
	(*stack)->i = res;
}
