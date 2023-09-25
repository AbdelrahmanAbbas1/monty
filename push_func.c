#include "monty.h"

/**
 * push_func - Pushes a new node to the stack LIFO
 * @head: A pointer to the head of the stack
 * @op_value: The value to be added
 */
void push_func(stack_t **head, unsigned int op_value)
{
	stack_t *new_node;
	stack_t *temp;

	new_node = malloc(sizeof(stack_t));

	new_node->n = op_value;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
	}
}
