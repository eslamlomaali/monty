#include "monty.h"
/**
 *opp - The opcode swap swaps the top two elements of the stack.
 *@listss: stack
 *@last_line: isntruction num
 */
void opp(stack_t **listss, unsigned int last_line)
{
	stack_t *thirdtwice, *fourthtwice;

	if (listss[0] == NULL || listss[0]->next == NULL)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", last_line);
		exit(EXIT_FAILURE);
	}
	thirdtwice = listss[0];
	fourthtwice = listss[0]->next;
	if (thirdtwice->next->next != NULL)
	{
		thirdtwice->next = fourthtwice->next;
		fourthtwice->next->prev = thirdtwice;
	}
	else
		thirdtwice->next = NULL;
	thirdtwice->prev = fourthtwice;

	fourthtwice->next = thirdtwice;
	fourthtwice->prev = NULL;
	*listss = fourthtwice;
}
