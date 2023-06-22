#include "monty.h"
/**
 * opcode - in charge of the running builtins
 * @stack: provided by main
 * @str: string to compare
 * @cnt_ln: line count
 *
 * Return: void
 */
void opcode(stack_t **stack, char *str, unsigned int cnt_ln)
{
	int a = 0;

	instruction_t op[] = INSTRUCTIONS;

	if (!strcmp(str, "stack"))
	{
		global.data_struct = 1;
		return;
	}
	if (!strcmp(str, "queue"))
	{
		global.data_struct = 0;
		return;
	}
	while (op[a].opcode)
	{
		if (strcmp(op[a].opcode, str) == 0)
		{
			op[a].f(stack, cnt_ln);
			return;
		}
		a++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", cnt_ln, str);
	status = EXIT_FAILURE;
}
