#include <bits/stdc++.h>
using namespace std;
int main(){
int test;
cin >> test;
while(test--){
    int num;
    cin >> num;
    float ans = num * 0.2;
    int final = ceil(100/ans);
    cout << final << endl;
    return 0;
}
}