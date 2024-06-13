#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
void pt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << ' ';
            n /= i;
        }
    }
    if (n > 1)
        cout << n;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return (b, a % b);
}
ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}
int main()
{
    int n;
    cin >> n;
    pt(n);
    return 0;
}