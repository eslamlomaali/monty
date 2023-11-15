#include "monty.h"
/**
 * push_in_stack - add node in stack
 * @topp: stack top
 * @calc: number of lines
 * Return: no return
*/
void push_in_stack(stack_t **topp, unsigned int calc)
{
	int x, y = 0, z = 0;

	if (bus.eslam)
	{
		if (bus.eslam[0] == '-')
			y++;
		for (; bus.eslam[y] != '\0'; y++)
		{
			if (bus.eslam[y] > 57 || bus.eslam[y] < 48)
				z = 1; }
		if (z == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", calc);
			fclose(bus.file);
			free(bus.content);
			free_stack(*topp);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", calc);
		fclose(bus.file);
		free(bus.content);
		free_stack(*topp);
		exit(EXIT_FAILURE); }
	x = atoi(bus.eslam);
	if (bus.ali == 0)
		addnode(topp, x);
	else
		addqueue(topp, x);
}
