/*
(A+B)%C= ((A%C)+(B%C))%C
(A-B)%C= ((A%C)-(B%C)+C)%C
(A*B)%C= ((A%C)*(B%C))%C
(A^B)%C=(A%C)^B%C

(A/B)%C=(A%C*B^-1)%C
*/

#include <iostream>
using ll = long long;
ll MOD = 1000000007;
// (a^b)%C
ll powMOD(ll a, ll b, ll c)
{
    ll res = 1;
    a = a % c;
    for (int i = 1; i <= b; i++)
    {
        res = res * a;
        res = res % c;
    }
    return res;
}
using namespace std;
int main()
{
    cout << powMOD(7, 10, 3) << endl;
}