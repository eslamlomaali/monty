#include "monty.h"
/**
 * print_top - print first
 * @h: stack first
 * @c: line_number
 * Return: no return
*/
void print_top(stack_t **h, unsigned int c)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", c);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}
