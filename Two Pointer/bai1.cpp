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

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }

    while (i < n)
    {
        cout << a[i] << " ";
        i++;
    }

    while (j < m)
    {
        cout << b[j] << " ";
        j++;
    }

    delete[] a;
    delete[] b;

    return 0;
}
