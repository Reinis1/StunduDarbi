#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout<<"Ievadi pirmo no skaitliem, kuru velies salidzinat: "<<endl;
    cin>>x;

    cout<<"Ievadi otro no skaitliem, kuru velies salidzinat: "<<endl;
    cin>>y;

    if (x>y){
        cout<<"Lielakais skaitlis ir: "<<x<<endl;
    }
    else if (x<y) {
        cout<<"Lielakais skaitlis ir: "<<y<<endl;
    }
    else
        cout<<"Abi skaitli ir vienadi"<<endl;
    return 0;
}
