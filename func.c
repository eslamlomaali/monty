#include "monty.h"
/**
 *func - execute the monty instructions
 *@head: stack
 *@line_number: instruction number
 */
void func(stack_t **head, unsigned int line_number)
{
	instruction_t eleventh[] = {
		{"push", put},
		{"pop", del},
		{"swap", opp},
		{"sub", rem_two},
		{"add", put_two},
		{"mod", mod_two},
		{"div", div_two},
		{"nop", not_any},
		{"rotr", rot_right},
		{"pint", print_allall},
		{"pchar", print_chr},
		{"mul", mul_two},
		{"rotl", rot_left},
		{"pstr", print_str},
		{"pall", print_all},
		{NULL, NULL}
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
