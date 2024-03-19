#include<iostream>
using namespace std;
int N,X[100];
void inkq()
{
    for (int i=0;i<N;i++){
        cout <<X[0];
    }
    cout << endl;
}
void Try(int i)
{
    for (int j=0;j<=1;j++)
    {
        X[i]=0;
        if(i==N)
        {
            inkq();
        }
        else{
            Try(i+1);
        }
    }


}
int main()
{
    cin >> N;
    Try(1);
    return 0;
}