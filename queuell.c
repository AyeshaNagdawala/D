#include <stdio.h>
#include <stdlib.h>

struct que
{
	int data;
	struct que *next;
};

void enq(struct que **f,struct que **r, int num)
{
    struct que *new=(struct que*)malloc(sizeof(struct que));
    new->data=num;
    new->next=NULL;
    if(*f==NULL)
    {
        *f=*r=new;
    }
    else
    {
        (*r)->next=new;
        *r=new;
    }
}

void deq(struct que **f, int num)
{
    struct que *temp;
    temp=*f;
    if(temp==NULL)
    {
        printf("queue is empty");
    }
    else
        {
            temp=*f;
            *f=(*f)->next;
            printf("\nNode deleted is %d\n",temp->data);
            free(temp);
        }
}


void display(struct que *f)
{
	struct que *temp;
	temp = f;

	if (temp == NULL)
	{
		printf("\nQueue is empty...\n");
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
	struct que *f;
	struct que *r;
	f=r=NULL;

	int choice = 0, flag = 0, num;
	while (flag != 4)
	{
		printf("\n1.enqueue\n2.dequeue\n3.Display\n4.Exit\n");
		printf("Enter a choice\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\nEnter data to be inserted:\n");
			scanf("%d", &num);
			enq(&f,&r,num);
			break;
		case 2:
			deq(&f,num);
			break;
		case 3:
			display(f);
			break;
		case 4:
			flag = 4;
			break;
		default:
			printf("Invalid choice");
		}
	}
}

