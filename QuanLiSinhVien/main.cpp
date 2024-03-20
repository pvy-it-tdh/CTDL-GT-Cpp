#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int menu()
{
    int option=0;
    cout <<"1. Input Students"<< endl;
    cout <<"2. Print Students"<< endl;
    cout <<"3. Searching Students By"<< endl;
    cout <<"4. Update Students"<< endl;
    cout <<"5. Get The List of Students"<< endl;
    cout <<"6. Exit"<< endl;
    cin >> option;
    return option;
}
typedef struct  student
{
    int ID;
    string fullName;
    string Birthday;
    string Address;
    string Class;
}STUDENT;

typedef STUDENT dataType;
dataType InputStudent(int ID)
{
    dataType st;
    st.ID=ID;
    cout << "ID: "<< ID << endl;
    cin.ignore();
    cout <<"FullName: ";
    getline(cin,st.fullName);
    cout << "Birthday: ";
    getline(cin, st.Birthday);
    cout << "Address: ";
    getline(cin, st.Address);
    cout << "Class: ";
    getline(cin, st.Class);
    return st;
}

void OutputStudent(dataType st,int index)
{
    if(index==0)
    {
        // ghi tieu de
        
    }
}
int main()
{
    int option=0;
    while(true)
    {
        option=menu();
        switch (option)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            return;
        }
    }
    system("pause");
}