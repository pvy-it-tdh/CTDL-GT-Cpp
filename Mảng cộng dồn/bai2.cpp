#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    int n, q;
    cin >> n >> q;
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
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 0)
        {
            cout prime[r] << endl;
        }
        else
        {
            int result = prime[r] - prime[l - 1];
            cout << result << endl;
        }
    }
    delete a[];
    delete prime[];
    return 0;
}
