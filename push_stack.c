#include "monty.h"

/**
 * push_stack - is a function that add a node to the list
 * Description: Funtion that push a new node at the beginning of stack
 * @head: is the element at the top of the stack
 * @line_number: consta int value in the structure
 * Return: void
 */

void push_stack(stack_t **head, unsigned int line_number)
{
	stack_t *new_node;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		return;

	new_node -> n = line_number;
	new_node -> prev = NULL;

	if (*head == NULL)
	{
		new_node -> next = NULL;
		*head = new_node;
	}
	else
	{
		new_node -> next = *head;
		(*head) -> prev = new_node;
		*head = new_node;
	}
}

