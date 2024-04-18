#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int m,n;
vector<int> adj[1001];
bool visited[1001];
void input()
{
    cin >> n>> m;
    for (int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    memset(visited,false,sizeof(visited));
}
void dfs(int u)
{
    cout << u << ' ';
    visited[u]=true;
    for(int v : adj[u])
    {
        if(!visited[v]){
            dfs(v);
        }
    }
}
int main()
{
    input();
    dfs(1);
    return 0;
}