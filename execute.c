#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @ccounter: line_counter
* @ffile: poiner to monty file
* @ccontent: line content
* Return: no return
*/
int execute(char *ccontent, stack_t **stack, unsigned int ccounter, FILE *ffile)
{
	instruction_t oopst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int ii = 0;
	char *oop;

	oop = strtok(ccontent, " \n\t");
	if (oop && oop[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (oopst[ii].opcode && oop)
	{
		if (strcmp(oop, oopst[ii].opcode) == 0)
		{	oopst[ii].f(stack, ccounter);
			return (0);
		}
		ii++;
	}
	if (oop && oopst[ii].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", ccounter, oop);
		fclose(ffile);
		free(ccontent);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
