#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;
    cout << "Ievadi trijstura malu garumus katru sava rindaa: ";
    cin>>a;
    cin>>b;
    cin>>c;
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        cout << "Neeksiste";
    else
        cout << "Eksiste";
}
