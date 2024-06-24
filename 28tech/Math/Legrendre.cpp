#include <iostream>
using namespace std;
int legrender(int n, int k)
{
    int res = 0;
    for (int i = k; i <= n; i += k)
    {
        int m = i;

        while (m % k == 0)
        {
            res++;
            m /= k;
        }
    }
    return res;
}
int legrender1(int n, int k)
{
    int res = 0;
    for (int i = k; i <= n; i += k)
    {
        res += n / i;
    }
    return res;
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << legrender(n, k);
    return 0;
}