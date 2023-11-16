#include "monty.h"
/**
 *let_m - release the memory
 *@sixth: stream in file
 *@seventh: guides for raw
 *@eigth: define the action for the function
 */
void let_m(FILE **sixth, char **seventh, char eigth)
{
	static FILE *ninth;
	static char *tenth;

	if (eigth == 's')
	{
		ninth = *sixth;
		tenth = *seventh;
	}
	else if (eigth == 'r')
	{
		free(tenth);
		fclose(ninth);
	}
}
