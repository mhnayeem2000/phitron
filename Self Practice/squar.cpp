#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int num1, num2;
    int count = 0;
    cin >> num1 >> num2;
        while(num1>=0){
            num1 =  num1 - num2;
            count++;
        }  
    cout << count << endl;      
    return 0;
}