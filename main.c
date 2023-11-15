#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - code interpreter of monty
* @acc: number of arhs
* @avv: place of file
* Return: 0 on success
*/
int main(int acc, char *avv[])
{
	char *content;
	FILE *file;
	size_t l = 0;
	ssize_t a = 1;
	stack_t *m = NULL;
	unsigned int ashraf = 0;

	if (acc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(avv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", avv[1]);
		exit(EXIT_FAILURE);
	}
	while (a > 0)
	{
		content = NULL;
		a = getline(&content, &l, file);
		bus.content = content;
		ashraf++;
		if (a > 0)
		{
			execute(content, &m, ashraf, file);
		}
		free(content);
	}
	free_stack(m);
	fclose(file);
return (0);
}
