#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int *a = new int[n];
    int *b = new int[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0;
    int j = 0;
    while (j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i] << ' ';
            i++;
        }
        else
        {
            i++;
        }
        if (i == n - 1)
        {
            i = 0;
            j++;
        }
    }
    delete[] a;
    delete[] b;
    return 0;
}