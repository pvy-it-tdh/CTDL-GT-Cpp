#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<char> se;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        se.insert(c);
    }
    cout << se.size() << endl;
    vector<char> v;
    for (char x : se)
    {
        cout << x << ' ';
        v.push_back(x);
    }
    cout << endl;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << ' ';
    }
    return 0;
}