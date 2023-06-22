#include "monty.h"
/**
* free_stack - frees a linked list
* @head: The first node in a stack
*/
void free_stack(stack_t *head)
{
	stack_t *a;

	a = head;
	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
