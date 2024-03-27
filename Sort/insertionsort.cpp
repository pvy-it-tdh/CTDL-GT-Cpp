#include<iostream>
using namespace std;
void insertionSort(int a[],int n)
{
    for (int i=1;i<n;i++)
    {
        int x=a[i],post=i-1;
        while (post>=0&&x<a[post])        
        {
            a[post+1]=a[post];
            --post;
        }
        a[post+1]=x;
    }
}
int main()
{
    int n;
    cin >> n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    insertionSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout <<a[i]<<' ';
    }
    return 0;
}