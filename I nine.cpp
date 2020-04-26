#include <iostream>
#include <cstdio>
#include <vector>
#define  DFS_WHITE -1
#define  DFS_BLACK 1
using namespace std;
typedef vector<int> vi;

vector<vi> graph;
vi dfs_num;

void readGraph()
{
    int node, next;

    while(scanf("%d", &node))
    {
        if(!node)
           break;
        while(scanf("%d", &next))
        {
            if(!next)
               break;
            graph[node-1].push_back(next-1);
        }
    }
}

void dfs(int node)
{
    int current;
    for(int x=0; x<graph[node].size(); x++)
    {
        current = graph[node][x];
        if(dfs_num[current] ==DFS_WHITE)
        {
            dfs_num[current] = DFS_BLACK;
            dfs(current);
        }
    }
}

void print()
{
    int notReach = 0;
    vector<int> out;
    for(int x=0; x<dfs_num.size(); x++)
        if(dfs_num[x] == DFS_WHITE)
        {
            notReach++;
            out.push_back(x+1);
        }
    if(notReach == 0)
       printf("0\n");
    else
        printf("%d ", notReach);
    for(int x=0; x<out.size(); x++)
    {
        if(x==out.size() - 1)
           printf("%d\n", out[x]);
        else
            printf("%d*", out[x]);
    }
}

int main()
{
int nodes, queries,sNode;
while(scanf("%d", &nodes) != EOF)
{
    if(!nodes)
       break;
    graph.assign(nodes, vi());
    readGraph();    scanf("%d", &queries);
    for(int x=0; x<queries; x++)
    {
        dfs_num.assign(nodes, DFS_WHITE);
        scanf("%d", &sNode);
        dfs(sNode-1);
        print();
    }
}
return 0;
}
