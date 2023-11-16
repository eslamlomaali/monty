#include "monty.h"
/**
 *del - The opcode swap swaps the top two elements of the stack.
 *@listss: of elements
 *@last_line: instruction num
 */
void del(stack_t **listss, unsigned int last_line)
{
	stack_t *seconedtwice;

	if (*listss == NULL)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", last_line);
		let_m(NULL, NULL, 'r');
		free_st(*listss);
		free(helper.point);
		exit(EXIT_FAILURE);
	}
	seconedtwice = *listss;
	*listss = listss[0]->next;
	free(seconedtwice);
}
