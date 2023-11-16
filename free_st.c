#include "monty.h"
/**
 *free_st - free list
 *@h: start of list
 */
void free_st(stack_t *h)
{
	stack_t *easy;

	if ((h) != NULL)
	{
		while ((h)!= NULL)
		{
			easy = h;
			h = h->next;
			free(easy);
		}
	}
}
