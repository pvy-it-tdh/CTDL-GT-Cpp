#include<iostream>
#include<cstring>
using namespace std;
int n,c[105][105],X[100];
int d=0,asn=INT16_MAX;
int visited[105];
void nhap()
{
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> c[i][j];
        }
    }
    memset(visited,0,sizeof(visited));
}
void Try(int i)
{
    for(int j =1;j<=n;j++)
    {
        if(visited[j]==0)
        {
            visited[j]=1;
            X[i]=j;
            d+=c[X[i-1]][X[i]]; // ví dụ 2->3 c[2][3]
            if(i==n)
            {
                asn=min(asn,d+c[X[n]][1]);
            }
            else{
                Try(i+1);
            }
            // backtrack 
            visited[j]=0;
            d -= c[X[i - 1]][X[i]];
        }
    }
}
int main()
{
    nhap();
    X[1]=1;visited[1]=1;
    Try(2);
    cout << asn;
    return 0;
}