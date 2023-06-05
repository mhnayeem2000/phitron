#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    cout << v.capacity() << endl;
    v.push_back(2);
    cout << v.capacity() << endl;
    v.push_back(4);
    cout << v.capacity() << endl;
    v.push_back(5);
    cout << v.capacity() << endl;
    v.push_back(6);
    cout << v.capacity() << endl;
    v.push_back(5);
    cout << v.capacity() << endl;
    v.push_back(5);
    cout << v.capacity() << endl;
    v.push_back(5);
    cout << v.capacity() << endl;
    v.push_back(5);
    cout << v.capacity() << endl;
    v.push_back(5);
    cout << v.capacity() << endl;
    return 0;
}

/*  
1,2,4,8,16,32,64,128 evabe capacity bare,
push back kore kore ekek value add korle 8 howya obdhi capacity 8 thakbe 

*/