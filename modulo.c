#include "monty.h"
/**
 * mod - calculates the division remainder
 * @stack: provided by main
 * @cnt_ln: line count
 *
 * Return: void
 */
void mod(stack_t **stack, unsigned int cnt_ln)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", cnt_ln);
		status = EXIT_FAILURE;
		return;
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cnt_ln);
		status = EXIT_FAILURE;
		return;
	}
	res = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, cnt_ln);
	(*stack)->n = res;
}
