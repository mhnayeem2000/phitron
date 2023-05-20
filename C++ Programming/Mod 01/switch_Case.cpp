#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter Any number : ";
    cin >> num;

    switch (num)
    {
    case 0 : cout << "You print zero" << endl;
        break;
    case 1 : cout << "You print one" << endl;
        break;
    case 2 : cout << "You print two" << endl;
        break;    
    default: cout << "You print default";
        break;
    }



    return 0;
}