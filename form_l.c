#include "monty.h"
/**
 *formater - ready monty for execution
 *@enter: raw of monty
 *Return: formated or not
*/
char **formater(char *enter)
{
	char **twelveth = NULL;
	char *Thirteenth = NULL;
	size_t fourteenth = 0;

	if (enter == '\0')
		return ('\0');
	if (enter[0] == '\0' || enter[1] == '\0')
		return ('\0');
	remove(&enter);
	if (is_empty(&enter) == 1)
		return ('\0');
	twelveth = malloc(sizeof(char **) * 3);
	if (twelveth == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		let_m(NULL, NULL, 'r');
		free(twelveth);
		exit(EXIT_FAILURE);
	}
	twelveth[0] = NULL, twelveth[1] = NULL, twelveth[2] = NULL;
	Thirteenth = strtok(enter, " ");
	while (Thirteenth != NULL && fourteenth <= 1)
	{
		twelveth[fourteenth] = Thirteenth;
		Thirteenth = strtok(NULL, " ");
		if (fourteenth >= 1)
			break;
		fourteenth++;
	}
	twelveth[fourteenth + 1] = NULL;
	return (twelveth);
}
