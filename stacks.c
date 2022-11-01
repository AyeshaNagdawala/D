#include <stdio.h>
#define MAX 3

int stack[MAX];
int top = -1;

void push()
{
    int data;
    if (top == MAX - 1)
    {
        printf("Stack overflow...\n");
    }
    else
    {
        printf("\nEnter the data to be inserted\n");
        scanf("%d", &data);
        top++;
        stack[top] = data;
    }
}
void pop()
{
    int data;
    if (top == -1)
    {
        printf("Stack underflow...\n");
    }
    else
    {
        data = stack[top];
        top--;
        printf("\nData deleted is %d", data);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("\nStack is empty...");
    }
    else
    {
        printf("Data on top is %d", stack[top]);
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n%d\n", stack[i]);
    }
}
void main()
{
    int choice;
    do
    {
        printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit");
        printf("\nEnter a choice:");
        scanf("%d", &choice);
        if (choice == 1)
        {

            push();
        }
        if (choice == 2)
        {
            pop();
        }
        if (choice == 3)
        {
            peek();
        }
        if (choice == 4)
        {
            display();
        }
        if (choice > 5)
        {
            printf("Invalid.");
        }
    } while (choice != 5);
}