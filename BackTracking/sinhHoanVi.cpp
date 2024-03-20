#include<iostream>
#include<cstring> // used memset
using namespace std;
int X[100],N,used[100];
void inkq()
{
    for (int i=1;i<=N;i++)
    {
        cout << X[i];
    }
    cout << endl;
}
void Try(int i)
{
    for(int j=1;j<=N;j++)
    {
        // Xet xem lieu rang co the gan X[i]=j khong
        if(used[j]==0)
        {
            X[i]=j;
            used[j]=1; // danh dau
            if(i==N)
            {
                inkq();
            }
            else
            {
                Try(i + 1);
            }
            // backtrack
            used[j] = 0;
        }
        
    }
}
int main()
{
    cin >> N;
    X[0]=0;
    memset(used,0,sizeof(used));
    Try(1);
    return 0;
}