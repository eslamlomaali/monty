#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
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
 * struct bus_s - struct
 * @eslam: value
 * @file: pointer for monty
 * @content: line
 * @ali: flag
 * Description: hold value via  program
 */
typedef struct bus_s
{
	char *eslam;
	FILE *file;
	char *content;
	int ali;
}  bus_t;
extern bus_t bus;

void pall_stt(stack_t **topp, unsigned int number);
void push_in_stack(stack_t **topp, unsigned int number);
void free_s(stack_t *h);
void print_top(stack_t **h, unsigned int number);
#endif
