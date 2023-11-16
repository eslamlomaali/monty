#include "monty.h"
#include <stdio.h>
/**
 *main - entry point
 *@ac: number of args
 *@av: argval
 *Return: void
*/
int main(int ac, char **av)
{
	FILE *first = NULL;
	char *seconed = NULL;
	size_t third = 0;
	unsigned int fourth = 0;
	stack_t *fifth = NULL;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	first = fopen(av[1], "r");
	if (first == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&seconed, &third, first) != EOF)
	{
		fourth++;
		let_m(&first, &seconed, 's');
		if (fourth != '\0')
			free(helper.point);
		helper.point = formater(seconed);
		if (helper.point == NULL || (helper.point[0][0] == '\n' ||
		helper.point[0][0] == '#'))
			continue;
	else
			func(&fifth, fourth);
	}
	let_m(NULL, NULL, 'r');
	free(helper.point);
	free_st(fifth);
	return (EXIT_SUCCESS);
}
