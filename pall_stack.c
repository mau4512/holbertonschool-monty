#include "monty.h"

/**
 * pall_stack - is a function to print
 * Description: Print all the elements of a stack
 * @head: element at the top of the stack
 */

void pall_stack(stack_t **head)
{
	if (*head == NULL)
		return;

	stack_t tmp = *head;

	while (tmp != NULL)
	{
		printf("%d\n", tmp -> n);
		tmp = tmp -> next;
	}
}
