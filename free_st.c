#include "monty.h"
/**
 *free_st - free list
 *@h: start of list
 */
void free_st(stack_t *h)
{
	stack_t *easy;

	if (h != '\0')
		while (h != '\0')
		{
			easy = h;
			h = h->next;
			free(easy);
		}
}
