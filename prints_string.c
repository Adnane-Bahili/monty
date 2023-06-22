#include "monty.h"
/**
 * pstr - prints the stack_t contents as a string
 * @stack: provided by main
 * @cnt_ln: error messages line count
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int cnt_ln __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		putchar((char) current->n);
		current = current->next;
	}
	putchar('\n');
}
