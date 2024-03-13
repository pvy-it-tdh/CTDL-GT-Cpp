#include<iostream>
#include <set>
using namespace std;
int main()
{
    int a[]={3,1,2,5};
    set<int>se;
    for (int x: a)
    {
        se.insert(x);
    }
    for(int x: se)
    {
        cout << x; // sắp xếp theo thứ tự tăng dần 
    }
    // các hàm trong set 
}