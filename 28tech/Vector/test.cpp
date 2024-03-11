#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // rỗng
    v.push_back(100); //{100}
    v.push_back(200); //{100,200}
    v.push_back(300); //{100,200,300}
    cout << v.size() << endl; // có 3 phần tử
    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << ' ';
    }
    for(int x : v)
    {
        cout << x << ' ';
    }
    return 0;
}