#include "monty.h"
/**
* free_s - free linked list
* @h: start of the stack
*/
void free_s(stack_t *h)
{
	stack_t *a;

	a = h;
	while (h)
	{
		a = h->next;
		free(h);
		h = a;
	}
}
