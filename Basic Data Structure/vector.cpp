#include <bits/stdc++.h>
using namespace std;
int main(){
   // vector<int> v(5);
    //vector<int> v(5,2);
    //vector<int> v1(5,3);
    //vector<int> v(v1);
    int arr[5] = {1,3,4,5,6};
    vector<int> v(arr,arr+5);
    for(int i = 0 ; i < v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    return 0 ;
}