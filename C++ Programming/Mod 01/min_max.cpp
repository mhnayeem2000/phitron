#include <iostream>
using namespace std;
int main(){
    int num, num1;
    cin >> num >> num1;
    int mn = min(num, num1);
    int mx = max(num, num1);
    cout << mn << " " << mx << endl;

    return 0;
}