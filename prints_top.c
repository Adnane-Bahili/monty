#include "monty.h"
/**
 * pint - prints the top data
 * @stack: provided by main
 * @cnt_ln: line count
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int cnt_ln)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", cnt_ln);
		status = EXIT_FAILURE;
		return;
	}
	printf("%d\n", (*stack)->n);
}
