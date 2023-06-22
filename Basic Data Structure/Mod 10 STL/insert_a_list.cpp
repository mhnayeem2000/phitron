#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList ={10,20,30,40,50};
    list<int> newList ={100,200,300};
    myList.insert(next(myList.begin(),2),newList.begin(),newList.end());
    for(int val : myList){
        cout << val << endl;
    }
}