#include "monty.h"

/**
 * swap - swap the values of the top and last elements
 * @h: head of the dll
 * @line_num: line number
 * opcode: swap
 */
void swap(stack_t **h, unsigned int line_num)
{
	int value0;

	if (!h || !*h)
	{
		printf("L%d: can't swap, %s too short\n", line_num, flag);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	value0 = (*h)->n;

	if ((*h)->next == NULL)
	{
		printf("L%d: can't swap, %s too short\n", line_num, flag);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	(*h)->n = ((*h)->next)->n;
	((*h)->next)->n = value0;
}

/**
 * rotl - the top element of the stack moves to the back
 * @h: head of the doubly linked list
 * @line_num: line number
 * opcode: rotl
 */
void rotl(stack_t **h, unsigned int line_num)
{
	stack_t *node, *tmp;

	(void) line_num;

	if (!h || !*h)
		return;
	if (!(*h)->next)
		return;

	node = pop_s(h);
	node->next = NULL;

	tmp = *h;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
	node->prev = tmp;
}

/**
 * rotr - the last element of the stack moves on top
 * @h: pointer to doubly linked list
 * @line_num: line number
 * opcode: rotr
 */
void rotr(stack_t **h, unsigned int line_num)
{
	stack_t *node;

	(void)line_num;

	if (!h || !*h)
		return;
	if (!(*h)->next)
		return;

	node = dequeue(h);
	node->prev = NULL;

	node->next = *h;
	(*h)->prev = node;
	*h = node;
}
