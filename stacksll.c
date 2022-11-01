#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int data;
	struct stack *next;
};

void push(struct stack **top, int num)
{
	// create new
	struct stack *new = (struct stack *)malloc(sizeof(struct stack));
	// initialize new
	new->data = num;
	//
	new->next = *top;
	*top = new;
}

void pop(struct stack **top)
{
	struct stack *temp;
	temp = *top;
	if (temp == NULL)
	{
		printf("\nStack underflow...\n");
	}
	else
	{
		*top = (*top)->next;
		printf("\nThe data deleted is %d\n", temp->data);
		free(temp);
	}
}
void display(struct stack *top)
{
	struct stack *temp;
	temp = top;

	if (temp == NULL)
	{
		printf("\nStack underflow...\n");
	}
	else
	{
		while (temp != NULL)
		{
			printf("\n%d->", temp->data);
			temp = temp->next;
		}
		printf("\nNULL\n");
	}
}
void main()
{
	struct node *top;
	top = NULL;
	int choice = 0, flag = 0, num;
	while (flag != 4)
	{
		printf("\n1.push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter a choice\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\nEnter data to be inserted:\n");
			scanf("%d", &num);
			push(&top, num);
			break;
		case 2:
			pop(&top);
			break;
		case 3:
			display(top);
			break;
		case 4:
			flag = 4;
			break;
		default:
			printf("Invalid choice");
		}
	}
}
