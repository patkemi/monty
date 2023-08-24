#include "monty.h"

int main()
{
	stack_t stack;
	initialize(&stack);
	
	char command[20];
	int value;
	
	while (1)
	{
		printf("Enter command: ");
		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			break;
		}
		
		if (strcmp(command, "pall\n") == 0)
		{
			monty_pall(&stack);
		}
		else if (sscanf(command, "push %d", &value) == 1)
		{
			monty_push(&stack, value);
		}
		else
		{
			printf("Usage: push integer or pall\n");
			exit(EXIT_FAILURE);
		}
	}
	
	return (0);
}
