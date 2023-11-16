#include "monty.h"
/**
 * rot_right - The opcode rotr rotates the stack to the bottom.
 * @listss: stack
 * @line_number: number of instructions
 * Return: void
 */
void rot_right(stack_t **listss,
unsigned int __attribute__((unused)) line_number)
{
	stack_t *first, *last;

	if (listss == NULL || *listss == NULL)
		return;
	first = *listss, last = *listss;
	while (last->next != NULL)
		last = last->next;
	first->prev = last;
	last->next = first;
	last->prev->next = NULL;
	last->prev = NULL;
	listss[0] = last;
}
