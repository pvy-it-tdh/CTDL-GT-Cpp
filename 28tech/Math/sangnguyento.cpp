#include <iostream>
#include <math.h>
using namespace std;
int maxn = 10000001;
bool nt[10000001];
void sang()
{
    for (int i = 0; i < maxn; i++)
    {
        nt[i] = true;
    }
    nt[0] = false;
    nt[1] = false;
    for (int i = 2; i < sqrt(maxn); i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= maxn; j += i)
            {
                nt[j] = false;
            }
        }
    }
}
int main()
{
    sang();
    for (int i = 1; i <= 10; i++)
    {
        if (nt[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}