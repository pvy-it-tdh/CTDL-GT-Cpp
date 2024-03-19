#include<iostream>
using namespace std;
int a[100],N,K;
void inkq()
{
    for (int i=0;i<K;i++)
    {
        cout << a[i];
    }
    cout << endl;
}
void Try(int i)
{
    for (int j=a[i-1]+1;j<=N-K+1;j++)
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
    cin >>N;
    Try(1);
    return 0;
}