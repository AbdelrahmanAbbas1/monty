#include "monty.h"

/**
 * pall_func - Prints all the elements in the stack LIFO
 * @head: A pointer to a pointer to the head of the stack
 * line_n: The line number
 */
void pall_func(stack_t **head, unsigned int line_n __attribute__((unused)))
{
	stack_t *temp;

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	while (temp->prev != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}
	printf("%d\n", temp->n);
}
