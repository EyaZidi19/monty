#include "monty.h"

/**
 * _push - push node to the top of stack
 * @head: pointer to head node of stack
 * @line_number: number of the line parsed.
 */

void _push(stack_t **head, unsigned int line_number)
{
	stack_t *tmp = *head, *new;

	if (check_digit(arguments.value) == 0)
		print_errors(3, NULL, line_number);
	new = malloc(sizeof(stack_t));
	if (!new)
		print_errors(4, NULL, 0);
	if (!*head)
		new->next = NULL;
	else
	{
		new->next = tmp;
		tmp->prev = new;
	}
	new->n = atoi(arguments.value);
	new->prev = NULL;
	*head = new;
}
/**
 * _print_all - print stack from top
 * @head: pointer to head node of stack
 * @line_number: number of the line parsed.
 */

void _print_all(stack_t **head, unsigned int line_number)
{
	stack_t *tmp = *head;

	(void) line_number;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
