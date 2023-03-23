#include "monty.h"

/**
 * stack - change behavior to stack
 * @h: pointer to doubly linked list
 * @line_num: line number
 */
void stack(stack_t **h, unsigned int line_num)
{
	(void)h;
	(void)line_num;

	flag = "stack";
}

/**
 * queue - change behavior to queue
 * @h: pointer to doubly linked list
 * @line_num: line number
 */
void queue(stack_t **h, unsigned int line_num)
{
	(void)h;
	(void)line_num;

	flag = "queue";
}

/**
 * nop - do not do anything
 * @h: pointer to doubly linked list
 * @line_num: line number
 */
void nop(stack_t **h, unsigned int line_num)
{
	(void)h;
	(void)line_num;
}
