#include<iostream>
using namespace std; 
int main()
{
    int a[]=[1000,500,200,100,50,20,10,5,2,1];
    int t ;
    long long k;
    cin >> t;
    while(t--)
    {
        cin >> k;
        res=0;
        for (int i=0;i<n;i++)
        {
            res+=k/a[i];
            k%=a[i];
        }
        cout << res << ' ';
    }
    return 0;
}