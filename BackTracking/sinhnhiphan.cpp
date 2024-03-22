#include<iostream>
using namespace std;
void print(int N,int *a)
{
    for (int i=0;i<N;i++)
        cout <<a[i];
    cout <<"\n";
}
void backtrack(int index,int N,int *a)
{
    for (int i=0;i<=1;i++){
        a[index]=i;
        if(index==N)
        {
            print(N,a);
            return;
        }
        else if(index<N) backtrack(index+1,N,a);
    }
}
int main()
{
    int n;
    cin >> n;
    int *a=new int[n];
    backtrack(0,n,a);
}