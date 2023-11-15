#include "monty.h"
/**
 * pall_stt - prints the stack
 * @topp: head of the stack
 * @loopp: count
 * Return: void
*/
void pall_stt(stack_t **topp, unsigned int loopp)
{
	stack_t *he;
	(void)loopp;

	he = *topp;
	if (he == NULL)
		return;
	while (he)
	{
		printf("%d\n", he->n);
		he = he->next;
	}
}
