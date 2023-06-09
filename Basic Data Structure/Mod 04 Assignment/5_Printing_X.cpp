#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,mid;
    cin >> num;
    mid = (num+1)/2;

    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            
            if( i ==  mid && j == mid) {
                cout << "X";
            }
            else if(i==j){
                cout << "\\";
            } 
            else if ( num == i + j-1 )
            {
                cout << "/";
            }
           
            else {
                cout << " ";
            }  
        }
        cout << endl;
    }
    return 0;
}