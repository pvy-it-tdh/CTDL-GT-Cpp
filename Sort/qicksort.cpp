#include<iostream>
using namespace std;
int partition(int a[], int l, int r)
{
    int pivot=a[r];
    int i=l-1;
    for (int j=0;j<r;j++)
    {
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    ++i;
    swap(a[i],a[r]);
    return i;
}
void qicksort(int a[], int l, int r)
{
    if(l>=r) return;
    int p=partition(a,l,r);
    qicksort(a,l,p-1);
    qicksort(a,p,r);
}
int main()
{
    int n;
    cin >> n;
    int *a= new int[n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    qicksort(a,0,n-1);
    for (int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}