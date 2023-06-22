#include "monty.h"
/**
 * is_digit - checks if a string is a digit
 * @str: string to check
 *
 * Return:	0 when it's not successful
 *		1 when It's successful
 */
int is_digit(char *str)
{
	if (!str || *str == '\0')
		return (0);
	if (*str == '-')
		str++;
	while (*str)
	{
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
