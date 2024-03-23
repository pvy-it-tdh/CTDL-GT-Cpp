#include<iostream>
using namespace std;

void Open(int &n, int *a, int &k)
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void print(int *tmp, int k)
{
    for (int i = 0; i < k; i++)
        cout << tmp[i] << " ";
    cout << "\n";
}

void backtrack(int index, const int n, int *tmp, const int *a, int k, int j)
{
    for (int i = j + 1; i < n; i++)
    {
        tmp[index] = a[i];
        if (index == k - 1)
            print(tmp, k);
        else if (index < n)
            backtrack(index + 1, n, tmp, a, k, i);
    }
}

int main()
{
    int n, k;
    int *a = new int[n];
    int *tmp = new int[k];
    Open(n, a, k);
    backtrack(0, n, tmp, a, k, -1);
    return 0;
}