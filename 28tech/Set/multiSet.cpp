#include <iostream>
#include <set>
using namespace std;

// multiset khác với set là nó có thể lưu phần tử trùng nhau
int main()
{
    multiset<int> se;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        se.insert(temp);
    }
    for (int x : se)
    {
        cout << x << " ";
    }
}