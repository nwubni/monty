#include "monty.h"


/**
* is_numeric - Checks if a string is a number
* @str: String parameter
* Return: int
*/

int is_numeric(const char *str)
{
	int digit_count = 0;

	if (str == NULL || *str == '\0')
		return (0);

	if (*str == '+' || *str == '-')
		str++;

	while (*str != '\0')
	{
		if (!isdigit(*str))
			return (0);

		digit_count++;
		str++;
	}

	return (digit_count > 0);
}

