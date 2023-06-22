#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList ={10,20,30,40,50};
   auto it = find(myList.begin(), myList.end(),20);
   if(it==myList.end()){
        cout << "Not Found" << endl;
   }
   else {
    cout << "Found " <<  endl;
   }
}