#include <iostream>

using namespace std;

int main()
{
    char x;
    cout << "Ievadi 1 simbolu" << endl;
    cin >>x;
    if ( isupper(x)) {
        cout << "uppercase" << endl;
    }
    else{
        cout << "lowercase" << endl;
    }
    return 0;
}
