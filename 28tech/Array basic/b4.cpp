/*
Đếm xem trong mảng có bao nhiêu giá trị khác nhau
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[100];
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int dem=0;
    for (int i=0;i<n;i++)
    {
        bool check=true;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                check=false;
                break;
            }
        }
        if(check)
        {
            dem++;
        }
    }
    cout << dem;
}