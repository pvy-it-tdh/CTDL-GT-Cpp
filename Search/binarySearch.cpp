#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int a[], int l,int r, int k)
{
    int m=(l+r)/2;
    if(k==a[m])
    {
        return m;
    }
    else if(k>a[m])
    {
        return binarySearch(a,m+1,r,k);
    }
    else
    {
        return binarySearch(a,l,m-1,k);
    }
}
int main()
{
    int n;
    cin >> n;
    int *a=new int[n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    int k;
    cin >> k;
    cout << binarySearch(a,0,n-1,k);
    return 0;
}