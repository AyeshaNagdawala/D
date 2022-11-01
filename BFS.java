#include <stdio.h>
#define MAXNODES 100
int graph[MAXNODES][MAXNODES];
int que[MAXNODES];
int visited[MAXNODES]={0};
int n;
//change
int rear=-1;
int front=-1;
int start_node;

void BFS( )
{
printf("%d\t",start_node);
visited[start_node]=2;
int i;
for(i=0;i<n;i++)
{
    if(graph[start_node][i]==1&&!visited[i])
    {
        //change
        rear++;
        que[rear]=i;
        if(front=-1)
        {
            front=0;
        }
        visited[i]=1;
    }
}
//change
if(front<=rear)
{
    //change
    start_node=que[front];
    front++;
    BFS( );
}
else
{
    for(i=0;i<n;i++)
    {
    if(visited[i]==0)
    {
        start_node=i;
        BFS();
    }
    }
}
}
void main( )
{
    int i,j,start_node=0;
    printf("Feed in the number of nodes ");
    scanf("%d",&n);
    printf("Feed in the adj. matrix\n");
    for (i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&graph[i][j]);
    BFS( );
}
