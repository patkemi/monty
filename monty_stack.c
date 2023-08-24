#include "monty.h"


/**
 * Initialize the stack by setting the top index to -1.
 * @param stack Pointer to the stack to be initialized.
 */
void initialize(stack_t *stack)
{
	stack->top = -1;
}

/**
 * Check if the stack is empty.
 * @param stack Pointer to the stack to be checked.
 * @return 1 if stack is empty, 0 otherwise.
 */
int isEmpty(stack_t *stack)
{
	return stack->top == -1;
}

/**
 * Check if the stack is full.
 * @param stack Pointer to the stack to be checked.
 * @return 1 if stack is full, 0 otherwise.
 */
int isFull(stack_t *stack)
{
	return stack->top == STACK_SIZE - 1;
}

/**
 * monty_push - Push an integer value onto the stack.
 * @param stack Pointer to the stack to which the value is to be pushed.
 * @param value Integer value to be pushed onto the stack.
 */
void monty_push(stack_t *stack, int value)
{
	if (isFull(stack))
	{
		printf("Stack overflow\n");
		exit(EXIT_FAILURE);
	}
	stack->data[++stack->top] = value;
}

/**
 * monty_pall - Print all elements of the stack.
 * If the stack is empty, nothing is printed.
 * @param stack Pointer to the stack to be printed.
 */
void monty_pall(stack *stack)
{
	if (!isEmpty(stack))
	{
		printf("Stack contents: ");
		for (int i = stack->top; i >= 0; i--)
		{
			printf("%d ", stack->data[i]);
		}
		printf("\n");
	}
}
