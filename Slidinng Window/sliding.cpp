#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n,k;
        cin >> n >>k;
        int a[1001];
        for (int i=0;i<n;i++)
        {
            cin >> a[i];    
        }
        long long sum=0;
        for (int i=0;i<k;i++)
        {
            sum+=a[i];
        }
        long long res=sum;
        int idx=0;
        for (int i=k;i<n;i++)
        {
            sum=sum-a[i-k]+a[i];
            if(sum>res)
            {
                res=sum;
                idx=i-k+1;
            }
        }
        cout << res << endl;
        for (int j=0;j<k;j++)
        {
            cout << a[idx+j] << ' ';
        }
       
    }
    return 0;
}