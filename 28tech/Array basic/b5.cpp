/*
Liệt kệ các giá trị khác nhau trong mảng
*/

// NOTE quan trọng của mảng đánh dấu 

/*
    Kĩ thuật mảng đánh dấu rất tối ưu về thời gian nhưng 
    Nhược điểm 
        -Không sử dụng được nếu mảng có số âm 
        -Phần tử trong mảng có số quá lớn
*/
#include<iostream>
using namespace std;
int cnt[1000001];
int dem[1000001];
int main()
{
    int n;
    cin >> n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int max_val=-1e9;
    for (int i=0;i<n;i++)
    {
        cnt[a[i]]=1;
        max_val=max(max_val,a[i]);
    }
    for (int i=0;i<max_val;i++)
    {
        if(cnt[i]==1)
        {
            cout << i << ' ';
        }
    }
    return 0;
}