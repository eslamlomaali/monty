#include "monty.h"
/**
 * rem_two - The opcode subtracts the top two elements of the stack.
 * @listss: stack
 * @line_number: flie line
 * Return: void
*/
void rem_two(stack_t **listss, unsigned int line_number)
{
	stack_t *fifthtwice, *sixthtwice;

	if (*listss == NULL || (*listss)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		let_m(NULL, NULL, 'r');
		free_st(*listss);
		free(helper.point);
		exit(EXIT_FAILURE);
	}
	fifthtwice = *listss;
	sixthtwice = (*listss)->next;
	sixthtwice->n -= fifthtwice->n;
	*listss = sixthtwice;
	sixthtwice->prev = NULL;
	free(fifthtwice);
}
