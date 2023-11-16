#include "monty.h"
/**
 *remove - remove lines
 *@sstring: string ot remove
 */
void remove(char **sstring)
{
	int Fifteenth = 0;
	char *sixteen = *sstring;

	while (sixteen[Fifteenth] != '\0')
	{
		if (sixteen[Fifteenth] == '\n')
			sixteen[Fifteenth] = '\0';
		Fifteenth++;
	}
}
