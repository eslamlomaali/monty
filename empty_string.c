#include "monty.h"
/**
 *is_empty - check if string is empty or not
 *@sstring: string
 *Return: 1 if empty, -1 if not
 */
int is_empty(char **sstring)
{
	int seventeenth = 0;

	while (sstring[0][seventeenth] != '\0')
	{
		if (sstring[0][seventeenth] != ' ')
			return (-1);
		seventeenth++;
	}
	return (1);
}
