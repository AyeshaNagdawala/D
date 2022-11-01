#include <stdio.h>
#define MAX 3
int que[MAX];
int front=-1;
int rear=-1;

void enq()
{   int data;
    if(rear==MAX-1)
    {
        printf("\nQueue is full...\n");
    }
    else
    {
        printf("\nEnter the data\n");
        scanf("%d",&data);
        rear++;
        que[rear]=data;
        if(front==-1)
            front=0;

    }
}
void deq()
{   int data;
    if(front==-1)
    {
        printf("\nQueue is empty...\n");
    }
    else
    {
        data=que[front];
        front++;
        printf("Data deleted is %d",data);
        if(front>rear)
            {
                front=-1;
                rear=-1;
            }
    }
}
void disp()
{
    int i;
     if(front==-1)
    {
        printf("\nQueue is empty...\n");
    }
    else
    {
    for(i=front;i<=rear;i++)
    {
        printf("\n%d\n",que[i]);
    }
    }
}
void main()
{
    int choice;
    int flag=0;
    while(flag!=4)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("\nEnter a choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enq();
            break;
        case 2:
            deq();
            break;
        case 3:
            disp();
            break;
        case 4:
            flag=4;
            break;
        default:
            printf("Invalid.");
        }
    }
}
