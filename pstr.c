#include "monty.h"

/**
 * print_str - The opcode pstr prints the string
 *          starting at the top of the stack, followed by a new line.
 * @listss: stack
 * @line_number: number of lines
 * Return:void
*/
void print_str(stack_t **listss,
__attribute__((unused))unsigned int line_number)
{
	stack_t *first = *listss;

	while (first)
	{
		if (first->n > 32 && first->n < 127)
			printf("%c", (int)first->n);
		else
			break;
		first = first->next;
	}
	printf("\n");
}
