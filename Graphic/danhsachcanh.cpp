#include<iostream>
using namespace std;
int a[1001][1001];
int m,n;
int main()
{
    cin >> n>> m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;
        a[x][y]=a[y][x]=1;
    }
    for (int i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}