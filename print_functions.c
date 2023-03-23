#include "monty.h"

/**
 * pall - print all the elements in a doubly linked list as numbers
 * @head: pointer to doubly linked list
 * @line_num: line number
 * opcode: pall
 */
void pall(stack_t **head, unsigned int line_num)
{
	stack_t *h;
	(void) line_num;

	if (!head)
		return;
	h = *head;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

/**
 * pstr - print all the elements in a doubly linked list as chars
 * @head: pointer to doubly linked list
 * @line_num: line number
 * opcode: pstr
 */
void pstr(stack_t **head, unsigned int line_num)
{
	stack_t *h;
	(void) line_num;

	if (!head || !*head)
		puts("");

	h = *head;
	while (h != NULL && h->n > 0 && h->n < 127)
	{
		printf("%c\n", h->n);
		h = h->next;
	}
}

/**
 * pint - peek the top of the stack
 * @h: pointer to doubly linked list
 * @line_num: line number
 * opcode: pchar
 */
void pint(stack_t **h, unsigned int line_num)
{

	if (!h || !*h)
	{
		printf("L%d: can't pint, %s empty\n", line_num, flag);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*h)->n);
}

/**
 * pchar - peek the top of the stack
 * @h: pointer to doubly linked list
 * @line_num: line number
 * opcode: pchar
 */
void pchar(stack_t **h, unsigned int line_num)
{
	int value;

	if (!h || !*h)
	{
		printf("L%d: can't pchar, %s empty\n", line_num, flag);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	value = (*h)->n;
	if (value < 0 || value > 127)
	{
		printf("L%d: can't pchar, value out of range\n", line_num);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	else
		printf("%c\n", value);
}
