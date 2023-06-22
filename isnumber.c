#include "monty.h"
/**
 * isnumber - checks if a string is a number
 * @str: provided string
 *
 * Return:	0 when it's not
 *		1 when a string is a number
 */
int isnumber(char *str)
{
	int d;

	if (!str)
		return (0);
	for (d = 0; str[d]; d++)
		if (d < '0' || d > '9')
			return (0);
	return (1);
}
