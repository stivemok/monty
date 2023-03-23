#include "monty.h"

/**
 * _strlen - string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); ++i)
		;
	return (i);
}

/**
 * skip_spaces - skip whitespaces
 * @s: string
 *
 * Return: pointer to where is the first non space char or NULL
 */
char *skip_spaces(char *s)
{
	if (!s)
		return (NULL);

	while (*s && *s == ' ')
		++s;
	if (*s == '\0')
		return (NULL);

	return (s);
}

/**
 * reach_number - get the first number in a string
 * @s: string
 *
 * Return: a pointer to where the number is or NULL
 */
char *reach_number(char *s)
{
	if (!s)
		return (NULL);

	while (*s && (*s < '0' || *s > '9'))
		++s;

	if (*s == '\0')
		return (NULL);
	return (s);
}

/**
 * _strcmp - compare 2 strings
 * @s1: string to compare
 * @s2: string used as reference
 * Return: the difference in value of the first characters where s1 and
 * s2 disagree
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0' && *(s2 + i) != '\0')
		i++;
	return (*(s1 + i) - *(s2 + i));
}

/**
 * _strncmp - compare 2 strings
 * @s1: string to compare
 * @s2: opcode
 * @n: length of opcode to compare
 * Return: 0 if OK
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && i < n)
	{
		if (*(s1 + i) == *(s2 + i))
		{
			++i;
		}
		else
		{
			return (*(s1 + i) - *(s2 + i));
		}
	}
	if (i == n && (*(s1 + i) == ' ' || *(s1 + i) == '\t' ||
		       *(s1 + i) == '\0' || *(s1 + i) == '\n'))
		return (0);
	return (EXIT_FAILURE);
}
