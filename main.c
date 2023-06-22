#include "monty.h"

int status = 0;

void error_usage(void);
void file_error(char *argv);


/**
 * main - entry point
 * @argv: arguments passed to the program
 * @argc: arguments count
 *
 * Return: void
 */
int main(int argc, char **argv)
{
	FILE *file;
	size_t buf_len = 0;
	char *buffer = NULL;
	char *str = NULL;
	stack_t *stack = NULL;
	unsigned int cnt_ln = 1;
	global.data_struct = 1;
	if (argc != 2)
		error_usage();

	file = fopen(argv[1], "r");

	if (!file)
		file_error(argv[1]);

	while (getline(&buffer, &buf_len, file) != -1)
	{
		if (status)
			break;
		if (*buffer == '\n')
		{
			cnt_ln++;
			continue;
		}
		str = strtok(buffer, " \t\n");
		if (!str || *str == '#')
		{
			cnt_ln++;
			continue;
		}
		global.argument = strtok(NULL, " \t\n");
		opcode(&stack, str, cnt_ln);
		cnt_ln++;
	}
	free(buffer);
	free_stack(stack);
	fclose(file);
	exit(status);
}
/**
 * error_usage - prints use message and exits
 *
 * Return: void
 */
void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * file_error - prints file's error message and exits
 * @argv: given by main
 *
 * Return: void
 */
void file_error(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}
