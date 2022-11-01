#include<stdio.h>
#define size 9
int adj_mat[size][size];
int vis [size];
struct stack1
{
    int a[size];
    int top;
}s1;
void push(int x)
{
    s1.top++; 
    s1.a[s1.top]=x;
}

int pop()
{
    int t;
    t=s1.a[s1.top];
    s1.top--;
    return t;
}

void dfs(int s)
{
    int p;
    push(s);
    vis[s]=1;
    p=pop();
    if(p!=0)
    printf("%d\t",p);
    
    while(p!=0)
    {
        for(int i=1;i<=size;i++)
        {
            if(adj_mat[p][i]==1&&vis[i]==0)
            {
                push(i);
                vis[i]=1;
            }
        }
        p=pop();
        if(p!=0)
        printf("%d\t",p);
    }
}


void main()
{
    int node,edges,sp,ep,sv;
    
    s1.top=-1;
    printf("hello dfs stack");
    printf("\nhow many nodes :");
    scanf("%d",&node);

    printf("\nhow many edges :");
    scanf("%d",&edges);

    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size;j++)
        {
            adj_mat[i][j]=0;
        }
    }

    for(int i=0;i<size;i++)
    {
        vis[i]=0;
    }

    for(int i=1;i<=edges;i++)
    {
        printf("\nenter  the start point:");
        scanf("%d",&sp);

        printf("\nenter  the end point:");
        scanf("%d",&ep);

        adj_mat[sp][ep]=1;
        adj_mat[ep][sp]=1;

    }

    printf("\n Adjaceny Matrix");
    for(int i=1;i<=size;i++)
    {
        printf("\n");
        for(int j=1;j<=size;j++)
        {
            printf("%d\t",adj_mat[i][j]);
        }
    }

    printf("\nenter  the source vertex:");
    scanf("%d",&sv);
    dfs(sv);
}
