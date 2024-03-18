#include<iostream>
using namespace std;
// sum = 1+ 2 + 3+ ...+n
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+ sum(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}