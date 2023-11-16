#include "monty.h"
/**
 *func - execute the monty instructions
 *@head: stack
 *@line_number: instruction number
 */
void func(stack_t **head, unsigned int line_number)
{
	instruction_t eleventh[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
	};
	int x;

	for (x = 0; eleventh[x].opcode != NULL; x++)
	{
		if (strcmp(helper.point[0], eleventh[x].opcode) == 0)
		{
			eleventh[x].f(head, line_number);
			return;
		}
	}
	if (eleventh[x].opcode == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number,
		helper.point[0]);
		free(helper.point);
		free_st(*head);
		let_m(NULL, NULL, 'r');
		exit(EXIT_FAILURE);
	}
}
