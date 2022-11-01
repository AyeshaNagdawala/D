#include <stdio.h>
#include<stdlib.h>
#define table_size 10

int h[table_size]={0};

void insert()
{
    int i,index,key,hkey,h2;
    printf("Enter element:\n");
    scanf("%d",&key);
    hkey=key%table_size;
    h2=7-(key%7);
    for(i=0;i<table_size;i++)
    {
        index= (hkey+i*(h2)) % table_size;

        if(h[index]==NULL)
        {
            h[index]=key;
            break;
        }
    }
    if(i==table_size)
    {
        printf("Data cannot be inserted");
    }
}
void search()
{
    int i,index,key,hkey,h2;
    printf("Enter element:\n");
    scanf("%d",&key);
    hkey=key%table_size;
    h2=7-(key%7);
    for(i=0;i<table_size;i++)
    {
        index=(hkey+i*(h2))%table_size;

        if(h[index]==key)
        {
            printf("Data found at %d",index);
            break;
        }
}
 if(i==table_size)
    {
        printf("Data cannot be inserted");
    }
}
void display()
{
    int i;
    for(i=0;i<table_size;i++)
    {
        printf("\nat index %d\t value is %d",i,h[i]);
    }
}
void main()
{
    int choice=0,flag=0;
    while(flag !=4)
    {
        printf("\n1.insert\n 2.display\n 3.search\n");
        printf("\nEnter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            flag=4;
            break;
        default:
            printf("Invalid");
        }
    }
}
