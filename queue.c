#include "monty.h"
/**
 * f_qu - print first
 * @listss: stack
 * @line_number: line_number
 * Return: no return
*/
void f_qu(stack_t **listss, unsigned int line_number)
{
	(void)listss;
	(void)line_number;
	helper.joo = 1;
}

/**
 * add_three - add node to a queue
 * @listss: linked list
 * @n: number
 * Return: void
 **/
void add_three(stack_t **listss, int n)
{
	stack_t *b, *a;

	a = *listss;
	b = malloc(sizeof(stack_t));
	if (b == NULL)
	{
		printf("Error\n");
	}
	b->n = n;
	b->next = NULL;
	if (a)
	{
		while (a->next)
			a = a->next;
	}
	if (!a)
	{
		*listss = b;
		b->prev = NULL;
	}
	else
	{
		a->next = b;
		b->prev = a;
	}
}
