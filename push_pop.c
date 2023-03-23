#include "monty.h"

/**
 * push - add an element to the stack/queue
 * @h: pointer to doubly linked list
 * @line: pointer to line
 * @line_num: line number
 */
void push(stack_t **h, char *line, unsigned int line_num)
{
	char *start_n;
	stack_t *node;

	start_n = reach_number(line);
	if (start_n == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		free(line);
		free(*h);
		*h = NULL;
		exit(EXIT_FAILURE);
	}

	node = add_node(h, atoi(start_n));
	free(line);
	if (node == NULL)
	{
		puts("Error: malloc failed");
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
}

/**
 * pop - pull an element from the stack or queue
 * @h: pointer to doubly linked list
 * @line_num: line number
 */
void pop(stack_t **h, unsigned int line_num)
{
	stack_t *node;

	if (_strcmp(flag, "stack") == 0)
		node = pop_s(h);
	else
		node = dequeue(h);

	if (node == NULL)
	{
		printf("L%d: can't pop an empty %s\n", line_num, flag);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	free(node);
}
