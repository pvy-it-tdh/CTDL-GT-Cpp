/*
đề bài cho mảng có n phần tử đếm xem trong mảng có bao nhiêu căp A[i]+A[j]= k cho trước 
*/

#include<iostream>
using namespace std;

using ll = long long;

int main()
{
    int n,k;
    cin >> n;
    int a[100];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int dem=0;
    cin >> k;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                dem++;
            }
        }
    }
    cout << dem<< endl;
}