#include<stdio.h>
#define MAX 100
int graph[MAX][MAX];
int stack[MAX];
int visited[MAX]={0};
int n;
int top=0;
int start_node;

void DFS()
{
    printf("%d\t",start_node);
    visited[start_node]=2;
    int i;
    for(i=0;i<n;i++)
    {
        if(graph[start_node][i]==1 && !visited[i])
        {
        top++;
        stack[top]=i;
        visited[i]=1;
        }
    }
    if(top!=0)
    {
        start_node=stack[top];
        top--;
        DFS();
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(visited[i]==0)
            {
                start_node=i;
                DFS();
            }
        }
    }
}
void main()
{
    int i,j,start_node=0;;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&graph[i][j]);

    DFS();
}


