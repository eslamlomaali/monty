#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct help - helper
 * @point: pointer
 *
 * Description: helper var
*/
typedef struct help
{
	char **point;
	int joo;
} help_t;

help_t helper;

void put(stack_t **listss, unsigned int line_number);
void print_all(stack_t **listss, unsigned int line_number);
void removeee(char **sstring);
void func(stack_t **head, unsigned int line_number);
void let_m(FILE **sixth, char **seventh, char eigth);
char **formater(char *enter);
int is_empty(char **sstring);
void free_st(stack_t *h);
int is_num(char *num);
void del(stack_t **listss, unsigned int line_number);
void opp(stack_t **listss, unsigned int line_number);
void put_two(stack_t **listss, unsigned int line_number);
void print_allall(stack_t **listss, unsigned int line_number);
void not_any(stack_t **listss, unsigned int line_number);
void rem_two(stack_t **listss, unsigned int line_number);
void div_two(stack_t **listss, unsigned int line_number);
void mul_two(stack_t **listss, unsigned int line_number);
void mod_two(stack_t **listss, unsigned int line_number);
void print_chr(stack_t **listss, unsigned int line_number);
void print_str(stack_t **listss, unsigned int line_number);
void rot_left(stack_t **listss, unsigned int line_number);
void rot_right(stack_t **listss, unsigned int line_number);
void f_st(stack_t **listss, unsigned int line_number);
void f_qu(stack_t **listss, unsigned int line_number);


#endif
