#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string ret = "";
    for (auto x : a)
    {
        if (x == '4')
            ret += "322";
        else if (x == '6')
            ret += "53";
        else if (x == '8')
            ret += "7222";
        else if (x == '9')
            ret += "7332";
        else if (x != '0' && x != '1')
            ret += x;
    }
    sort(ret.begin(), ret.end(), greater<char>());
    cout << ret;
    return 0;
}