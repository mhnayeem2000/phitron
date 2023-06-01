#include <bits/stdc++.h>
using namespace std;
int main(){
int count = 0;    
string s;
getline(cin, s);
stringstream ss(s);
string word;
while (ss >> word)
{
    if( word == "Ratul"){
       count++;
    }
}
if(count >= 1){
    cout << "Yes" << endl;
}else cout << "No" << endl;

return 0;
}