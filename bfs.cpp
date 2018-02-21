#include<bits/stdc++.h>
using namespace std;

void bfs(int n,int s);
int n,e,s,i,a,b;
int visited[100];
vector<int>adj[100];
int main()
{
    printf("Enter no of Nodes and Edges:");
    scanf("%d%d",&n,&e);
    printf("Enter Source Node:");
    scanf("%d",&s);
    printf("Enter Adjacency List:\n");
    for(i=0;i<e;i++)
    {
        scanf("%d%d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    printf("BFS Traversal:");
    bfs(n,s);
    return 0;
}

void bfs(int n,int s)
{
    for(int i=0;i<e;i++)
    {
        visited[i]=0;
    }
    queue<int>q;
    q.push(s);
    visited[s]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        printf(" %d",u);
        for(i=0;i<adj[u].size();i++)
        {
            int v= adj[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                q.push(v);
            }
        }
    }
    printf("\n");


}

