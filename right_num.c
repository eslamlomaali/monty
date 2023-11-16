#include "monty.h"
/**
 *is_num - string is a number or not
 *@num: string
 *Return: 1 if its a number, -1 not
 */
int is_num(char *num)
{
	int Twentyfirst = 0;

	if (num[0] == '-')
		Twentyfirst++;
	while (num[Twentyfirst] != '\0')
	{
		if (num[Twentyfirst] < 48 || num[Twentyfirst] > 57)
			return (-1);
		Twentyfirst++;
	}
	return (1);
}
