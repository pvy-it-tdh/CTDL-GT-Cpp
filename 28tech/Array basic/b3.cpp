/*
Đề bài liệt kê các giá trị khác nhau
input 
5
1 2 4 1 5
output
1 2 4 5
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
    for (int i=0;i<n;i++)
    {
        bool check= true;
        for (int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                check=false;
                break;
            }
        }
        if(check)
        {
                cout << a[i]<< ' ';
        }
    }
    return 0;
}