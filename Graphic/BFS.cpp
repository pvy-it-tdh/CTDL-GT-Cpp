#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;
// case test
// Input:
// 10 11
// 1 2 
// 1 3
// 1 5
// 1 10
// 2 4
// 3 6
// 3 7
// 3 9
// 6 7
// 5 8
// 8 9
// output
// 1 2 3 5 10 4 6 7 9 8
int n,m;
vector<int> adj[1001];
bool visited[1001];
void input()
{
    cin >> n >>m ;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
}
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u]=true;
    while (!q.empty())
    {
        int v=q.front();
        q.pop();
        cout << v << ' ';
        for(int x: adj[v])
        {
            if(!visited[x])
            {
                q.push(x);
                visited[x]=true;
            }
        }
    }
    
}
int main()
{
    input();
    bfs(1);
    return 0;
}