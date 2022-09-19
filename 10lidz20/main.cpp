#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Ievadi malu garumus" << endl;
    cin >>x;
    cin >>y;
    cin >>z;
    if  ((x + y) > z) {
        cout << "Pareizi" << endl;}
    else{
        cout << "nepareizi" << endl;}
    return 0;
}
