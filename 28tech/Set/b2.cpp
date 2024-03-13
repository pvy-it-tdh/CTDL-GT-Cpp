#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int (n);
    for (int i=0;i<n;i++)   
    {
        cin >> a[i];
    }
    set <int> se;
    for (int i=0;i<n;i++)
    {
        se.insert(a[i]);
    }
    int q ; cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if(se.find(x)!=se.end())
        {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
