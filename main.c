#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
 * * main - code interpreter of monty
 * * @acc: number of arhs
 * * @avv: place of file
 * * Return: 0 on success
 * */
int main(int acc, char *avv[])
{
		char *e;
			FILE *s;
				size_t l = 0;
					ssize_t a = 1;
						stack_t *m = NULL;
							unsigned int ashraf = 0;

								if (acc != 2)
										{
													fprintf(stderr, "USAGE: monty file\n");
															exit(EXIT_FAILURE);
																}
									s = fopen(avv[1], "r");
										bus.s = s;
											if (!s)
													{
																fprintf(stderr, "Error: Can't open file %s\n", avv[1]);
																		exit(EXIT_FAILURE);
																			}
												while (a > 0)
														{
																	e = NULL;
																			a = getline(&e, &l, s);
																					bus.e = e;
																							ashraf++;
																									if (a > 0)
																												{
																																execute(e, &m, ashraf, s);
																																		}
																											free(e);
																												}
													free_stack(m);
														fclose(s);
														return (0);
}
