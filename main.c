#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *ccontent;
	FILE *ffile;
	size_t ssize = 0;
	ssize_t rread_line = 1;
	stack_t *sstack = NULL;
	unsigned int ccounter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	ffile = fopen(argv[1], "r");
	bus.file = ffile;
	if (!ffile)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (rread_line > 0)
	{
		content = NULL;
		rread_line = getline(&ccontent, &ssize, ffile);
		bus.content = ccontent;
		ccounter++;
		if (rread_line > 0)
		{
			execute(ccontent, &sstack, ccounter, ffile);
		}
		free(ccontent);
	}
	free_stack(sstack);
	fclose(ffile);
return (0);
}
