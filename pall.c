#include "monty.h"
/**
 *print_all - The opcode pall prints all the values on the stack,
 *starting from the top of the stack.
 *
 *@listss: list of elements
 *@calc_line: cmd
 *
 */
void print_all(stack_t **listss,  __attribute__((unused))
		unsigned int calc_line)
{
	stack_t *eighteen;

	eighteen = *listss;
	if (eighteen == NULL)
		return;
	while (eighteen != NULL)
	{
		printf("%i\n", eighteen->n);
		eighteen = eighteen->next;
	}
}
