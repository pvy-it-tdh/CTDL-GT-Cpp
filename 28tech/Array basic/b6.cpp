#include<iostream>
using namespace std;
int cnt[1000001];
int main ()
{
    int n;
    cin >> n;
    int a[100];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int max_val=-1e9;
    for(int i=0;i<n;i++)
    {
        cnt[a[i]]++;
        max_val=max(max_val,a[i]);
    }
    for(int i=0;i<max_val;i++)
    {
        if(cnt[i]!=0)
        {
            cout << i << ' '<< cnt[i]<< endl;
        }
    }
}