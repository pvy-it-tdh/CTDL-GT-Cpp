#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

using T = pair<int, int>;

int dis(T A, T B)
{
    return (A.first - B.first) * (A.first - B.first) + (A.second - B.second) * (A.second - B.second);
}

int main()
{
    int n;
    cin >> n;
    vector<T> point(n);
    for (auto &[x, y] : point)
        cin >> x >> y;

    T origin = {0, 0}; // Điểm gốc để so sánh khoảng cách

    sort(point.begin(), point.end(), [&](T x, T y)
         {
        int dx = dis(x, origin);
        int dy = dis(y, origin);
        if (dx != dy) return dx < dy;
        else if (x.first != y.first) return x.first < y.first;
        else return x.second < y.second; });

    for (auto [x, y] : point)
    {
        cout << x << " " << y << endl;
    }
    return 0;
}
