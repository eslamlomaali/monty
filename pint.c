#include "monty.h"
/**
 *pint - The opcode pint prints the value at the top
 *of the stack, followed by a new line.
 *
 *@listss: elements
 *@line_number: instruction num
 */
void pint(stack_t **listss, unsigned int line_number)
{
	if (*listss == NULL)
	{
		fprintf(stderr, "L%i: can't pint, stack empty\n", line_number);
		let_m(NULL, NULL, 'r');
		free_st(*listss);
		free(helper.point);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", listss[0]->n);
}
