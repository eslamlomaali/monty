#include "monty.h"
/**
 *put - The opcode push pushes an element to the stack.
 *@listss: stack
 *@calc_line: cmd
 */
void put(stack_t **listss, __attribute__((unused))unsigned int calc_line)
{
	stack_t *nineteenth, *twentieth;

	if (helper.point[1] == NULL || is_num(helper.point[1]) == -1)
	{
		fprintf(stderr, "L%i: usage: push integer\n", calc_line);
		let_m(NULL, NULL, 'r');
		free_st(*listss);
		free(helper.point);
		exit(EXIT_FAILURE);
	}
	twentieth = *listss;
	nineteenth = malloc(sizeof(stack_t));
	if (nineteenth == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		let_m(NULL, NULL, 'r');
		free_st(*listss);
		free(helper.point);
		exit(EXIT_FAILURE);
	}
	nineteenth->next = '\0';
	nineteenth->n = atoi(helper.point[1]);
	nineteenth->prev = '\0';
	*listss = nineteenth;
	nineteenth->next = twentieth;
	if (twentieth != NULL)
		twentieth->prev = nineteenth;
}
