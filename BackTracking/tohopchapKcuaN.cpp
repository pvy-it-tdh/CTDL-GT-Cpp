#include<iostream>
using namespace std;
int a[100],N,K;
void inkq()
{
    for (int i=1;i<=K;i++)
    {
        cout << a[i];
    }
    cout << endl;
}
void Try(int i)
{
    for (int j=a[i-1]+1;j<=N-K+i;j++)
    {
        a[i]=j;
        if(i==K)
        {
            inkq();
        }
        else{
            Try(i+1);
        }
    }
}
int main()
{
    cin >>N>> K;
    Try(1);
    return 0;
}