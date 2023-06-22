#include "monty.h"
/**
 * pchar - prints the integer at the top of the stack as char
 * @stack: provided by main
 * @cnt_ln: line count
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int cnt_ln)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", cnt_ln);
		status = EXIT_FAILURE;
		return;
	}
	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", cnt_ln);
		status = EXIT_FAILURE;
		return;
	}
	printf("%c\n", (*stack)->n);
}
