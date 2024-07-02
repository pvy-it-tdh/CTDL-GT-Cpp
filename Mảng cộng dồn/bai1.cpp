#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll *prime = new ll[n];
    prime[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prime[i] = prime[i - 1] + a[i];
        cout << prime[i] << ' ';
    }
}