#include "monty.h"
/**
 *rot_left - The opcode rotl rotates the stack to the top.
 *@listss: stack
 *@line_number: number of instructions
 */
void rot_left(stack_t **listss, unsigned int __attribute__((unused))line_number)
{
	stack_t *first, *last;

	if (listss == NULL || *listss == NULL)
		return;
	first = *listss, last = *listss;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->prev = last;
	first->next->prev = NULL;
	*listss = first->next;
	first->next = NULL;
}
