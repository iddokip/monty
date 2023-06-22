#include "monty.h"
/**
 * addnode - adds a node to the head
 * @head: The first node in a stack
 * @nn: a new number
 * Return: Null
*/
void addnode(stack_t **head, int nn)
{

	stack_t *new, *au;

	au = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{ printf("Error\n");
		exit(0); }
	if (au)
		au->prev = new;
	new->n = nn;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
