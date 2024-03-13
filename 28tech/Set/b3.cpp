#include<iostream>
#include<set>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    int *a= new int (n);
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    set<int> se; 
    for (int i=0;i<n;i++)
    {
        if(se.find(a[i])==se.end())
        {
            cout <<a[i] << ' ';
        }
        se.insert(a[i]);
    }
}