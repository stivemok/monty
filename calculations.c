#include "monty.h"

/**
 * _add - add the top 2 values on the stack
 * @h: pointer to doubly linked list
 * @line_num: line number
 * opcode: add
 */
void _add(stack_t **h, unsigned int line_num)
{
	int num1, num2;

	num1 = get_argument(h, "add", line_num);
	num2 = get_argument(h, "add", line_num);

	add_node(h, num1 + num2);
}


/**
 * _sub - subtract the top 2 values on the stack
 * @h: pointer to doubly linked list
 * @line_num: line number
 * opcode: sub
 */
void _sub(stack_t **h, unsigned int line_num)
{
	int num1, num2;

	num1 = get_argument(h, "sub", line_num);
	num2 = get_argument(h, "sub", line_num);

	add_node(h, num2 - num1);
}


/**
 * _div - divides the top 2 values on the stack
 * @h: pointer to doubly linked list
 * @line_num: line number
 * opcode: div
 */
void _div(stack_t **h, unsigned int line_num)
{
	int num1, num2;

	num1 = get_argument(h, "div", line_num);
	num2 = get_argument(h, "div", line_num);

	if (num1 == 0)
	{
		printf("L%d: division by zero\n", line_num);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	add_node(h, num2 / num1);
}


/**
 * _mul - multiply the top 2 values on the stack
 * @h: pointer to doubly linked list
 * @line_num: line number
 * opcode: mul
 */
void _mul(stack_t **h, unsigned int line_num)
{
	int num1, num2;

	num1 = get_argument(h, "mul", line_num);
	num2 = get_argument(h, "mul", line_num);

	add_node(h, num2 * num1);
}



/**
 * _mod - get the modulo of the top 2 values on the stack
 * @h: pointer to doubly linked list
 * @line_num: line number
 * opcode: mod
 */
void _mod(stack_t **h, unsigned int line_num)
{
	int num1, num2;

	num1 = get_argument(h, "mod", line_num);
	num2 = get_argument(h, "mod", line_num);

	if (num1 == 0)
	{
		printf("L%d: division by zero\n", line_num);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	add_node(h, num2 % num1);
}
