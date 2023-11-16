#include "monty.h"
/**
 *removeee - remove lines
 *@sstring: string ot remove
 */
void removeee(char **sstring)
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
