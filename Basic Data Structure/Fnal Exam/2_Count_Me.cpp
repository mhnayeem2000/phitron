#include<bits/stdc++.h>
using namespace std;
int main(){
   int size;
   cin >> size;
   cin.get();
   while(size--){
        string st;
        getline(cin, st);
        string word;
        stringstream ss(st);
        map<string,int> mp;
        while(ss>> word){
            mp[word]++;
        }
        int max =0;
        string firstSt;

        for(auto it = mp.begin(); it != mp.end();it++){
            if(it->second > max){
                max = it->second;
                firstSt = it->first;
            }
        }

        cout << firstSt << " " << max << endl;
    }
    return 0;
}