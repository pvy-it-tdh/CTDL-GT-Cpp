#include <iostream>
using namespace std;
using ll = long long;
ll luythua(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll x = luythua(a, b / 2);
    if (b % 2 == 1)
        return x * x * a;
    else
        return x * x;
}
ll luythua2(ll a, ll b)
{
    int res = 1;
    while (b != 0)
    {
        if (b % 2 == 1)
        {
            res *= a;
        }
        b /= 2;
        a *= a;
    }
    return res;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << luythua(a, b);
    return 0;
}