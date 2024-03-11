/*
 Đề bài tìm các cặp số có độ chêch lệch bé nhất trong mảng
*/
#include<iostream>
using namespace std;
int main ()
{
    int n;
    int a[100];
    cin >> n;
    int res= INT16_MAX;
    cout << res;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])<res)
            {
                res = abs(a[i] - a[j]);
            }
        }
    }
    cout << res << endl;
}