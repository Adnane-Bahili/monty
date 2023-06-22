#include "monty.h"
/**
 * _mul - multiplies next top value by the top value
 * @stack: provided by main
 * @cnt_ln: line count
 *
 * Return: void
 */
void _mul(stack_t **stack, unsigned int cnt_ln)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", cnt_ln);
		status = EXIT_FAILURE;
		return;
	}
	res = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, cnt_ln);
	(*stack)->n = res;
}
