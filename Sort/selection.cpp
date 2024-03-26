#include<iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        int min=i;
        for (int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(a[i],a[min]);
    }
}
int main()
{
    int n;
    cin >> n;
    int *a= new int[n]; 
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }    
    selectionSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}