#include "monty.h"
/**
 * _sub -  substracts first two nodes of the stack
 * @stack: provided by main
 * @cnt_ln: line count
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int cnt_ln)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cnt_ln);
		status = EXIT_FAILURE;
		return;
	}
	res = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, cnt_ln);
	(*stack)->n = res;
}
