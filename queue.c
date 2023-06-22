#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @ccounter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int ccounter)
{
	(void)head;
	(void)ccounter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @nn: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int nn)
{
	stack_t *nnew_node, *aaux;

	aaux = *head;
	nnew_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	nnew_node->n = nn;
	nnew_node->next = NULL;
	if (aaux)
	{
		while (aaux->next)
			aaux = aaux->next;
	}
	if (!aaux)
	{
		*head = nnew_node;
		nnew_node->prev = NULL;
	}
	else
	{
		aaux->next = nnew_node;
		nnew_node->prev = aaux;
	}
}
