#include<iostream>
using namespace std;
void heapify(int a[], int n,int i)
{
    int l=2*i+1;
    int r=2*i+2;
    int largest=i;
    if(l<n &&a[l]>a[largest])
    {
        largest=l;
    }
    if (r < n && a[r] > a[largest])
    {
        largest = l;
    }
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}
void heapsort(int a[],int n)
{
    // xây dựng maxheap
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
    //
    for (int i=n-1;i>=0;i--)
    {
        swap(a[i],a[0]);
        heapify(a,i,0);
    }
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
    heapsort(a,n);
    for (int i=0;i<n;i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}