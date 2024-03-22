#include<iostream>
using namespace std; 

// 0 1 2 3 5 8 13 21 ...
int fibonaci(int i)
{
    if(i==0)
    {
        return 0;
    }
    else if(i==1)
    {
        return 1;
    }
    return fibonaci(i-1)+fibonaci(i-2);

}
int main()
{
    int n;
    cout <<" Ban hay nhap so fibonaci thu may ?" << endl;
    cin >> n;
    cout << " so fibonaci thu "<< n << fibonaci(n);
    return 0;
}