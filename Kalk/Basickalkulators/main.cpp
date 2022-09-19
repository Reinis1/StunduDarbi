#include <iostream>

using namespace std;

int main()
{
    float x, y, r;
    char po;
    cout << "Ievadi pirmo skaitli" << endl;
    cin >>x;
    cout << "Ievadi operatoru"<< endl;
    cin >>po;
    cout << "Ievadi otro skaitli" << endl;
    cin >>y;

    switch(po){
    case '+':
        cout<<x+y;
        break;

    case '-':
        cout<<x-y;
        break;

    case '*':
        cout<<x*y;
        break;

    case '/':
        cout<<x/y;
        break;

    default:
        cout << "Ievadits nepareizs operators" << endl;
        break;
    }


    return 0;
}
