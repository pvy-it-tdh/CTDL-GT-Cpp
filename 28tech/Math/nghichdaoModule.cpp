#include <iostream>
using namespace std;
int x, y, g;
void extended_gcd(int a, int b)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        g = a;
    }
    else
    {
        extended_gcd(b, a % b);
        int temp = x;
        x = y;
        y = temp - a / b * y;
    }
}

int modular_inverse(int a, int m)
{
    extended_gcd(a, m);
    return (x % m + m) % m;
}
int main()
{
    int a, m;
    cin >> a >> m;
    cout << modular_inverse(a, m);
}