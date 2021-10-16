#include<stdio.h>
#include<stdlib.h>
#define MAX 21
#define INFINITY (int)1e9
#define TEMP 0
#define PERM 1
#define NIL -1

int adj[MAX][MAX];
int predecessor[MAX];
int pathLength[MAX];
int status[MAX];
int n;
//display
void display()
{
    for(int i=0;i<=n;++i)
        for(int j=0;j<=n;++j)
            printf("%d  ",adj[i][j]);
}
//create graph
void create_graph()
{
    printf("Enter total no of nodes: ");
    scanf("%d",&n);
    int max_length=n*(n-1);
    int u,v,w;
    for(u=0,v=0;u!=-1 && v!=-1;)
    {
        printf("\nEnter u and v (-1 -1 to stop): ");
        scanf("%d %d",&u,&v);
        if(u==-1 && v==-1)
            break;
        printf("\nEnter weight: ");
        scanf("%d",&w);
        if(u>n || v>n || w<0 || u<0||v<0)
        {
            printf("Invalid Input");
            continue;
        }
        adj[u][v]=w;        
    }   
}
//min temporary satus
int min_temp_status()
{
    int min=INFINITY;
    int index=0;
    for(int i=0;i<=n;++i)
    {
        if(!status[i] && pathLength[i]<min)
        {
            min=pathLength[i];
            index=i;
        }
    }
    return index;
}
//check status array
int check_status()//returns a boolean output
{
    for(int i=0;i<=n;++i)
        if(status[i]==0)
            return 1;
    return 0;
}
//dijkstra
void dijktra(int source)
{
    for(int i=0;i<=n;++i)
    {
        predecessor[i]=NIL;
        pathLength[i]=INFINITY;
    }
    status[source]=PERM;
    pathLength[source]=0;
    while(check_status())
    {
        for(int i=0;i<=n;++i)
        {
            if(source==i || !adj[source][i])
                continue;
            if(pathLength[i]>pathLength[source]+adj[source][i])
            {
                pathLength[i]=adj[source][i]+pathLength[source];
                predecessor[i]=source;
            }
        }
        int min= min_temp_status();
        source=min;
        status[min]=PERM;
    }
    //printf("I am successfully executed");
}
//get path
void getpath(int source,int destination)
{
    int val[MAX];
    int size=0;
    val[size++]=destination;
    while(destination!=source)
    {
        if(predecessor[destination]==-1)
        {
            printf("No path found\n");
            exit(0);
        }
        val[size++]=predecessor[destination];
        destination=predecessor[destination];
    }
    for(int i=size-1;i>=0;--i)
        printf("%d--> ",val[i]);
}
int main()
{
    int u,v;
    create_graph();
    //display();
    printf("\nEnter source and destination: ");
    scanf("%d %d",&u,&v);
    dijktra(u);
    getpath(u,v);
    return 0;
}
