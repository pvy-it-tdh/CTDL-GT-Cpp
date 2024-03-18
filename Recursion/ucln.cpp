#include<iostream>
using namespace std;
// Ước chung lớn nhất
int UCLN(int m, int n)
{
    if(n==0){
        return m;
    }
    return UCLN(n,m%n);
}
int main()
{
    int n,m;
    cin >> n>> m;
    cout << UCLN(n,m);
    return 0;
}