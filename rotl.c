#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@head: stack head
  *@ccounter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int ccounter)
{
	stack_t *ttmp = *head, *aaux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aaux = (*head)->next;
	aaux->prev = NULL;
	while (ttmp->next != NULL)
	{
		ttmp = ttmp->next;
	}
	ttmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = ttmp;
	(*head) = aaux;
}
