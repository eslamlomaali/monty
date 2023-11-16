#include "monty.h"
/**
 * print_chr - prints the char at the top of the stack, followed by a new line.
 * @listss: stack
 * @line_number: instructions' nums
 * Return: void
 */
void print_chr(stack_t **listss, unsigned int line_number)
{
	if (listss == '\0' || listss[0] == '\0')
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		let_m(NULL, NULL, 'r');
		free_st(*listss);
		free(helper.point);
		exit(EXIT_FAILURE);
	}
	if (listss[0]->n < 32 || listss[0]->n > 126)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		let_m(NULL, NULL, 'r');
		free_st(*listss);
		free(helper.point);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", listss[0]->n);
}
